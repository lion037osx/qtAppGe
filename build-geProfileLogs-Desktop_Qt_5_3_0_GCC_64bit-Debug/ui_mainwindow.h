/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionFile;
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QPushButton *pushButton_Conectar;
    QLabel *label_bg_uart;
    QPushButton *pushButton;
    QWidget *tab_2;
    QLineEdit *lineEdit_Dato;
    QPushButton *pushButton_Enviar;
    QLabel *label_Enviados;
    QLabel *label_Recibidos;
    QLineEdit *lineEdit_Enviados;
    QLineEdit *lineEdit_Recibidos;
    QLabel *label;
    QPlainTextEdit *lineEdit_receive_data;
    QPushButton *pushButton_reset;
    QPushButton *pushButton_log;
    QLabel *label_bg_data;
    QPushButton *pushButton_exit;
    QPushButton *pushButton_clear_screen;
    QMenuBar *menuBar;
    QMenu *menuOpen_log;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1253, 769);
        actionFile = new QAction(MainWindow);
        actionFile->setObjectName(QStringLiteral("actionFile"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(20, 10, 1211, 651));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        pushButton_Conectar = new QPushButton(tab);
        pushButton_Conectar->setObjectName(QStringLiteral("pushButton_Conectar"));
        pushButton_Conectar->setGeometry(QRect(530, 210, 161, 91));
        label_bg_uart = new QLabel(tab);
        label_bg_uart->setObjectName(QStringLiteral("label_bg_uart"));
        label_bg_uart->setGeometry(QRect(-1, -1, 160, 160));
        label_bg_uart->setScaledContents(true);
        label_bg_uart->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(1020, 520, 151, 71));
        tabWidget->addTab(tab, QString());
        label_bg_uart->raise();
        pushButton_Conectar->raise();
        pushButton->raise();
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        lineEdit_Dato = new QLineEdit(tab_2);
        lineEdit_Dato->setObjectName(QStringLiteral("lineEdit_Dato"));
        lineEdit_Dato->setGeometry(QRect(710, 20, 311, 51));
        pushButton_Enviar = new QPushButton(tab_2);
        pushButton_Enviar->setObjectName(QStringLiteral("pushButton_Enviar"));
        pushButton_Enviar->setGeometry(QRect(1040, 20, 151, 51));
        label_Enviados = new QLabel(tab_2);
        label_Enviados->setObjectName(QStringLiteral("label_Enviados"));
        label_Enviados->setGeometry(QRect(50, 510, 71, 20));
        label_Recibidos = new QLabel(tab_2);
        label_Recibidos->setObjectName(QStringLiteral("label_Recibidos"));
        label_Recibidos->setGeometry(QRect(1090, 510, 81, 21));
        lineEdit_Enviados = new QLineEdit(tab_2);
        lineEdit_Enviados->setObjectName(QStringLiteral("lineEdit_Enviados"));
        lineEdit_Enviados->setGeometry(QRect(20, 530, 141, 21));
        lineEdit_Enviados->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_Recibidos = new QLineEdit(tab_2);
        lineEdit_Recibidos->setObjectName(QStringLiteral("lineEdit_Recibidos"));
        lineEdit_Recibidos->setGeometry(QRect(1040, 529, 151, 21));
        lineEdit_Recibidos->setMaxLength(32766);
        lineEdit_Recibidos->setFrame(true);
        lineEdit_Recibidos->setCursorPosition(0);
        lineEdit_Recibidos->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label = new QLabel(tab_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(350, 150, 501, 21));
        label->setAlignment(Qt::AlignCenter);
        lineEdit_receive_data = new QPlainTextEdit(tab_2);
        lineEdit_receive_data->setObjectName(QStringLiteral("lineEdit_receive_data"));
        lineEdit_receive_data->setGeometry(QRect(10, 180, 1181, 321));
        pushButton_reset = new QPushButton(tab_2);
        pushButton_reset->setObjectName(QStringLiteral("pushButton_reset"));
        pushButton_reset->setGeometry(QRect(1040, 90, 151, 51));
        pushButton_log = new QPushButton(tab_2);
        pushButton_log->setObjectName(QStringLiteral("pushButton_log"));
        pushButton_log->setGeometry(QRect(870, 90, 151, 51));
        label_bg_data = new QLabel(tab_2);
        label_bg_data->setObjectName(QStringLiteral("label_bg_data"));
        label_bg_data->setGeometry(QRect(-1, -1, 160, 160));
        label_bg_data->setScaledContents(true);
        pushButton_exit = new QPushButton(tab_2);
        pushButton_exit->setObjectName(QStringLiteral("pushButton_exit"));
        pushButton_exit->setGeometry(QRect(1030, 560, 161, 41));
        pushButton_clear_screen = new QPushButton(tab_2);
        pushButton_clear_screen->setObjectName(QStringLiteral("pushButton_clear_screen"));
        pushButton_clear_screen->setGeometry(QRect(530, 560, 161, 41));
        tabWidget->addTab(tab_2, QString());
        label_bg_data->raise();
        lineEdit_Dato->raise();
        pushButton_Enviar->raise();
        label_Enviados->raise();
        label_Recibidos->raise();
        lineEdit_Enviados->raise();
        lineEdit_Recibidos->raise();
        label->raise();
        lineEdit_receive_data->raise();
        pushButton_reset->raise();
        pushButton_log->raise();
        pushButton_clear_screen->raise();
        pushButton_exit->raise();
        pushButton_exit->raise();
        pushButton_clear_screen->raise();
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1253, 22));
        menuOpen_log = new QMenu(menuBar);
        menuOpen_log->setObjectName(QStringLiteral("menuOpen_log"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuOpen_log->menuAction());
        menuOpen_log->addAction(actionFile);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Ge Profile 3", 0));
        actionFile->setText(QApplication::translate("MainWindow", "file", 0));
        pushButton_Conectar->setText(QApplication::translate("MainWindow", "Connect to Profile", 0));
        label_bg_uart->setText(QString());
        pushButton->setText(QApplication::translate("MainWindow", "Exit", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Uart", 0));
        pushButton_Enviar->setText(QApplication::translate("MainWindow", "SEND", 0));
        label_Enviados->setText(QApplication::translate("MainWindow", "Transmitte", 0));
        label_Recibidos->setText(QApplication::translate("MainWindow", "Receive", 0));
        lineEdit_Enviados->setText(QApplication::translate("MainWindow", "0", 0));
        lineEdit_Recibidos->setText(QApplication::translate("MainWindow", "0", 0));
        label->setText(QApplication::translate("MainWindow", "Debug", 0));
        pushButton_reset->setText(QApplication::translate("MainWindow", "RESET", 0));
        pushButton_log->setText(QApplication::translate("MainWindow", "START LOG", 0));
        label_bg_data->setText(QString());
        pushButton_exit->setText(QApplication::translate("MainWindow", "Exit", 0));
        pushButton_clear_screen->setText(QApplication::translate("MainWindow", "Clear Screen", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Data", 0));
        menuOpen_log->setTitle(QApplication::translate("MainWindow", "open log", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
