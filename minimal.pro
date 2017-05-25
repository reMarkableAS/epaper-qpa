TARGET = qminimal


QT += core-private gui-private platformsupport-private

#LIBS += -lQt5PlatformSupport -lQt5Gui

SOURCES =   main.cpp \
            qminimalintegration.cpp \
            qminimalbackingstore.cpp
HEADERS =   qminimalintegration.h \
            qminimalbackingstore.h

OTHER_FILES += minimal.json

CONFIG +=  plugin
CONFIG += qpa/genericunixfontdatabase
#PLUGIN_TYPE = platforms
#PLUGIN_CLASS_NAME = QMinimalIntegrationPlugin
#!equals(TARGET, $$QT_DEFAULT_QPA_PLUGIN): PLUGIN_EXTENDS = -
# load(qt_plugin)
TEMPLATE = lib
