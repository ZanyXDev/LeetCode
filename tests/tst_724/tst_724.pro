QT += testlib
QT -= gui

CONFIG += c++11
CONFIG += qt console warn_on depend_includepath testcase
CONFIG -= app_bundle

TEMPLATE = app

SOURCES +=  tst_leftzero.cpp \
    ../../724/src/solution.cpp

HEADERS += \
    ../../724/src/solution.h
