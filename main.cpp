#include <iostream>
#include <vector>

using namespace std;

int getSum(const vector<int> &v);
int getAverage(const vector<int> &v);

int main(int argc, char const *argv[])
{
    vector<int> testVec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << getSum(testVec) << endl;
    cout << getAverage(testVec) << endl;
    return 0;
}

int getSum(const vector<int> &v)
{
    int sum = 0;
    for (const int &n : v)
        sum += n;
    return sum;
}

int getAverage(const vector<int> &v)
{
    int sum = getSum(v);

    return (sum / v.size());
}