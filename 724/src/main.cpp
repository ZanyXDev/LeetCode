#include <QCoreApplication>
#include "solution.h"
#include <QTextStream>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Solution solution;
    std::vector<int> nums;
    QTextStream stdOut(stdout);

    stdOut <<  solution.pivotIndex(nums);
    stdOut.flush();

    QObject::connect(&solution, &Solution::finished,
                     &a, &QCoreApplication::quit,
                     Qt::QueuedConnection);
    solution.run();
    return a.exec();
}
