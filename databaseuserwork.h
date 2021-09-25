#ifndef DATABASEUSERWORK_H
#define DATABASEUSERWORK_H

#include <QThread>
#include <QDate>
#include <QTime>
#include <QTimer>

#include "databaseencap.h"

#define DATABASE_WORK_LOG(str) DATABASE_LOG(QString("WORK"), str)

class DataBaseUserWork : public QObject
{
    Q_OBJECT
public:
    DataBaseUserWork(QObject *parent = nullptr);
    virtual ~DataBaseUserWork(){};

private:
    DataBaseEncap *mDBEnc;
    QString curDate;
    QString todayInfoTable;
    QString todaySummaryTable;

    QThread workeThd;

    QTimer *mTimer;

private slots:
    void timerSolt();
};

#endif // DATABASEUSERWORK_H
