#include <QString>
#include <QtTest>

#include "area.h"

class TestArea : public QObject
{
    Q_OBJECT

public:
    TestArea();

private Q_SLOTS:
    void toAreaTest();
};

TestArea::TestArea()
{
}

void TestArea::toAreaTest()
{
    Area area(1);       //实例化对象
    QVERIFY(qAbs(area.countArea() - 3.14) < 0.00000001);      //求面积和3.14的差的绝对值为0，浮点数用0.00000001代替
    QVERIFY2(true, "Failure");
}

QTEST_APPLESS_MAIN(TestArea)

#include "tst_testarea.moc"
