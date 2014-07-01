TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt
CONFIG += c++11

LIBS += -lboost_system
LIBS += -pthread
LIBS += -lsfml-audio -lsfml-system

SOURCES += main.cpp \
    playback/playback_module.cpp

HEADERS += \
    playback/playback_module.h
