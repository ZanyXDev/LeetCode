#pragma once

#include <QObject>

class Solution : public QObject
{
    Q_OBJECT
public:
    explicit Solution(QObject *parent = nullptr);
    int pivotIndex(std::vector<int>& nums) ;

public slots:
    void run();
signals:
    void finished();
};

