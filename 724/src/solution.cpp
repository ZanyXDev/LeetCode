#include "solution.h"
Solution::Solution(QObject *parent)
    : QObject{parent}
{

}


int Solution::pivotIndex(std::vector<int> &nums)
{
    if ( nums.size() == 0 ) return -1;
    if ( nums.size() == 1 ) return 0;
    const int sum = accumulate(nums.begin(), nums.end(), 0);
    int prefix = 0;
    int index = 0;
    bool flag =  std::all_of(nums.begin(), nums.end(), [&](int val) {
        // return false if you want to break, true otherwise
        if (prefix == sum - prefix - val){
            return false;
        }else{
            index ++;
            prefix += val;
        }
        return true;
    });
    return ( flag ) ? -1 : index;
}

void Solution::run()
{
    emit finished();
}

