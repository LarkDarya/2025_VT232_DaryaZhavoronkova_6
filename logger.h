#ifndef LOGGER_H
#define LOGGER_H

#include <QFile>
#include <QTextStream>

class Logger {
public:
    Logger(const QString& filePath) : logFile(filePath) {
        logFile.open(QIODevice::Append | QIODevice::Text);
    }

    ~Logger() {
        logFile.close();
    }

    void logMessage(const std::string &message) {
        if (logFile.isOpen()) {
            QTextStream out(&logFile);
            out << QString::fromStdString(message) << "\n";
            out.flush();
        }
    }

private:
    QFile logFile;
};

#endif // LOGGER_H
