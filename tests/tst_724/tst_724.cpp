#include <QtTest>
#include "../../724/src/solution.h"
// add necessary includes here

class Test724 : public QObject
{
    Q_OBJECT

public:
    Test724();
    ~Test724();

private slots:

    void test();
    void test_data();

private:
    Solution solution;
};

Test724::Test724()
{

}

Test724::~Test724()
{

}

void Test724::test_data()
{
    QTest::addColumn<std::vector<int>>("inputVector");
    QTest::addColumn<int>("result");

    QTest::newRow("set 1")
            << std::vector<int>({1,7,3,6,5,6})
            << 3;
    QTest::newRow("set 2")
            << std::vector<int>({1,2,3})
            << -1;
    QTest::newRow("set 3")
            << std::vector<int>({2,1,-1})
            << 0;
    QTest::newRow("set 4")
            << std::vector<int>({2})
            << 0;
}

void Test724::test()
{
    QFETCH(std::vector<int>, inputVector);
    QFETCH(int, result);
    QCOMPARE(solution.pivotIndex(inputVector),result);
}


QTEST_APPLESS_MAIN(Test724)

#include "tst_724.moc"
