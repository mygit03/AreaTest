#ifndef AREA_H
#define AREA_H

#include <QObject>

class Area : public QObject
{
    Q_OBJECT
public:
    explicit Area(QObject *parent = 0);
    Area(double r);

    double countArea();

signals:

public slots:

private:
    double m_r;         //半径
};

#endif // AREA_H
