#-------------------------------------------------
#
# Project created by QtCreator 2014-10-31T19:24:24
#
#-------------------------------------------------



QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = geProfileLogs

TEMPLATE = app

VERSION = 5


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui

include ("src/qextserialport.pri")

!host_build:QMAKE_MAC_SDK = macosx

#ICON = icon.icns#__MAC__

#//ICON = qtdemo.ico#__LINUX__
ICON+=net.png

#RC_ICONS =  icon.ico#__WIN__

