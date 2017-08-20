#include "mainwindow.h"
#include <QApplication>
#include <QDesktopWidget>
#include <QSplashScreen>
#include <QTimer>
#include <QLabel>
#include <QStatusBar>
#include <QDebug>
#include <QIcon>
#include <QPixmap>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainWindow w;
    //w.show();
    QSplashScreen *splash=new QSplashScreen;
QPixmap pixmap(qApp->applicationDirPath() + "/../srcGe/png/ge.png");

pixmap.scaled(QSize(720,720));

    #ifdef Q_OS_LINUX
    qDebug()<<"LINUX OS";

    splash->setPixmap(pixmap.scaled(720,720,Qt::IgnoreAspectRatio,Qt::FastTransformation));
    #endif

    #ifdef Q_OS_MACOS
    qDebug()<<"MAC OS";
  //  splash->setPixmap(QPixmap(qApp->applicationDirPath() + "/../srcGe/png/ge3.png"));
    #endif

    splash->setWindowOpacity(0.80);
  //  splash->resize(QSize(720,720));
//    splash->showMaximized();
    splash->show();
    QTimer::singleShot(2000,splash,SLOT(close()));

    MainWindow w;

    QIcon icon(qApp->applicationDirPath() + "/../srcGe/png/ge.png");

    w.setWindowIcon(icon);
    w.move(QApplication::desktop()->screen()->rect().center() - w.rect().center());
    //QTimer::singleShot(2000,&w,SLOT(showFullScreen()));
QTimer::singleShot(2000,&w,SLOT(show()));
    return a.exec();
}
