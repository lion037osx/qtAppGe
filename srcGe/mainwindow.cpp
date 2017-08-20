#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qextserialenumerator.h"
#include <QDebug>  //permite imprimir en consola
#include <QMessageBox> // muestra mensajes de error
#include <QTime>
#include <QFile>
#include <QIcon>
#include <QLabel>
#include <QPixmap>
#include <QSize>
#include <QProcess>


MainWindow::MainWindow(QWidget *parent) : //constructor
    QMainWindow(parent),
    ui(new Ui::MainWindow), m_port(NULL),m_cant_bytes_enviados(0),m_cant_bytes_recibidos(0) //
{
    ui->setupUi(this);
    ui->tabWidget->setCurrentIndex(0);

    QPixmap pixmap(QSize(10,10));
    pixmap=QPixmap(qApp->applicationDirPath() + "/../srcGe/png/ge2.png");

    ui->label_bg_data->width();
    ui->label_bg_data->height();
    ui->label_bg_data->setPixmap(pixmap);
    ui->label_bg_uart->setPixmap(pixmap);
}

MainWindow::~MainWindow()
{
    if(stat==1)file.close();
    delete ui;
}


void MainWindow::onDatosRecibidos()
{
    QByteArray bytes;
    int cant=m_port->bytesAvailable();
    //if(bytes.isNull())return;
    bytes.resize(cant);
    m_port->read(bytes.data(),bytes.size());//cant de datos a leer
    m_cant_bytes_recibidos+=cant;
    //ui->textEdit->insertPlainText(bytes);
    ui->lineEdit_Recibidos->setText(QString::number(m_cant_bytes_recibidos));
    ui->lineEdit_receive_data->insertPlainText(bytes);
    ui->lineEdit_receive_data->ensureCursorVisible();

    if(stat==1){
        QTextStream stream( &file );
        stream<<bytes;//text().toLocal8Bit();
    }
    qDebug()<<"Rx:"<<bytes;
    qDebug()<<"recepcion";
}





void MainWindow::on_pushButton_Conectar_clicked()
{
    //consulta si el puero esta en uso; el dato del puerto queda en el ComboBox
       if (!m_port)
       {
            QString sPort;

            m_port= new QextSerialPort(sPort, QextSerialPort::EventDriven); //cuando sucede un evento

            //m_port->setBaudRate(BAUD115200);
            m_port->setBaudRate(BAUD9600);
            m_port->setFlowControl(FLOW_OFF);
            m_port->setParity(PAR_NONE);
            m_port->setDataBits(DATA_8);
            m_port->setStopBits(STOP_1);

            #ifdef Q_OS_LINUX
            m_port->setPortName("/dev/ttyUSB0");
            #endif

            #ifdef Q_OS_MACOS
            m_port->setPortName("/dev/ttyUSB0");
            #endif
           if(m_port->open(QIODevice::ReadWrite)==true) // si puede abrir el puerto
           {
                qDebug()<<"Puerto Abierto";
                connect(m_port, SIGNAL(readyRead()),this,SLOT (onDatosRecibidos())); //m_port es el objeto; signal es la señal a  recibir
                ui->tabWidget->setCurrentIndex(1);
           }
           else
           {
               qDebug()<<"Error de apertura";
               delete m_port; // libero memoria dinamica
               m_port=NULL;
           }
       }
       else
       {
           qDebug()<<"Cerramos Puerto";
           delete m_port;
           m_port=NULL;
       }
       if (m_port && m_port->isOpen())
            ui->pushButton_Conectar->setText("Disconnect");
       else
           ui->pushButton_Conectar->setText("Connect to Profile");

}


void MainWindow::on_pushButton_Enviar_clicked()
{
    if (m_port==NULL || !m_port->isOpen())
    {
            QMessageBox::critical(this,"Error de conexion", "Seleccione un puerto valido");
            return;
    }

    if (!ui->lineEdit_Dato->text().isEmpty())
    {
        QByteArray send=ui->lineEdit_Dato->text().toLocal8Bit();
        m_port->write(send + "\r\n");
    }
}





void MainWindow::delay()
{
    QTime dieTime= QTime::currentTime().addSecs(1);
    while (QTime::currentTime() < dieTime)
    QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
}




void MainWindow::on_pushButton_reset_clicked()
{
    qDebug()<<"exec Button Reset";
    ui->pushButton_reset->setText("OK");
    m_port->write("AT+RST\r\n");
    delay();delay();delay();delay();delay();
    ui->pushButton_reset->setText("RESET");
}


void MainWindow::on_pushButton_log_clicked()
{
//static char dateTime[30];
static int *year=new int ;
static int *mon=new int ;
static int *day=new int ;
static int *hour=new int ;
static int *min=new int ;
static int *sec=new int ;
//static int *mide=new int ;
QDateTime UTC(QDateTime::currentDateTimeUtc());
QDateTime local(UTC.toLocalTime());
char txt[254];
time_t  time=UTC.toTime_t();
time=time-10800;
*year=(UTC.toTime_t()/31556926);
*sec=time%60;
*min=(time/60)%60;
*hour=(time/3600)%24;
*day=(time/(3600*24))%31;
*mon=(((time-(time/31556926)))/2629743%12)+1;
sprintf(txt,"/home/optimus/Documentos/logErrosGe/logGe%d%02d%02d%02d%02d%02d.txt",(*year+1970),*mon,*day,*hour,*min,*sec);
qDebug()<<txt;
QString filename=txt;
file.setFileName(txt);

  static bool  checked;
    if(checked==0){
        qDebug()<<"start"<<checked;
        ui->pushButton_log->setText("STOP LOG");
          checked=1;

          if ( file.open(QIODevice::ReadWrite) )
          {
          stat=1;
          }
    }
    else{
        qDebug()<<"stop"<<checked;
        ui->pushButton_log->setText("START LOG");
        checked=0;
        file.close();
        stat=0;
    }
}


void MainWindow::on_pushButton_clicked()
{
    delete m_port;
    m_port=NULL;
    this->close();
}

void MainWindow::on_pushButton_exit_clicked()
{
    this->close();
}



void MainWindow::on_pushButton_clear_screen_clicked()
{
    ui->lineEdit_receive_data->clear();
}
