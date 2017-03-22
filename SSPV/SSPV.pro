#-------------------------------------------------
#
# Project created by QtCreator 2016-03-31T08:43:24
#
#-------------------------------------------------

QT       += core gui sql
QT       += network
QT       += serialport
QT       += multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SSPV
TEMPLATE = app


SOURCES += main.cpp\
        siviso.cpp \
    blanco.cpp \
    ppi.cPp \
    signal.cpp \
    dbasepostgresql.cpp \
    wconfig.cpp

HEADERS  += siviso.h \
    blanco.h \
    ppi.h \
    signal.h \
    dbasepostgresql.h \
    wconfig.h \

FORMS    += siviso.ui \
    wconfig.ui

RESOURCES += \
    resource.qrc
