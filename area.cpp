#include "area.h"

#include <QDebug>

#define PI 3.14

Area::Area(QObject *parent) : QObject(parent)
{

}

Area::Area(double r)
{
    m_r = r;
}

double Area::countArea()
{
    double area = PI * m_r * m_r;
    qDebug() << "area:" << area;

    return area;
}
