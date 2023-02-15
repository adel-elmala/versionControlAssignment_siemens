#include <iostream>
#include <vector>

using namespace std;

int getSum(const vector<int> &v);
int getMin(const vector<int> &v);

int main(int argc, char const *argv[])
{
    vector<int> testVec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << getSum(testVec) << endl;
    cout << getMin(testVec) << endl;
    return 0;
}

int getSum(const vector<int> &v)
{
    int sum = 0;
    for (const int &n : v)
        sum += n;
    return sum;
}

int getMin(const vector<int> &v)
{
    int tmp = v[0];
    for (const int &n : v)
        tmp = std::min(tmp, n);
    return tmp;
}