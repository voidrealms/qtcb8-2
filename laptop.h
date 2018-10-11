#ifndef LAPTOP_H
#define LAPTOP_H

#include <QObject>
#include <QDebug>

class laptop : public QObject
{
    Q_OBJECT
public:

    //Constructor
    explicit laptop(QObject *parent = nullptr, QString name = "");

    //Deconstructor
    ~laptop();

    int weight;
    QString name;
    double asKilograms();
    void test();


signals:

public slots:
};

#endif // LAPTOP_H
