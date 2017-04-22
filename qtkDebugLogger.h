#ifndef DEBUG_LOGGER_H
#define DEBUG_LOGGER_H
#include <QFile>
#include <QDebug>

//http://doc.qt.io/qt-5/qtglobal.html#qInstallMessageHandler
void debugLogger(QtMsgType type, const QMessageLogContext &context, const QString &msg);
#endif