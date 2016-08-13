#-------------------------------------------------
#
# Project created by QtCreator 2016-08-11T14:14:31
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = t2
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    forwardwin.cpp

HEADERS  += mainwindow.h \
    forwardwin.h

FORMS    += mainwindow.ui \
    forwardwin.ui

QT +=opengl
