//https://codeforces.com/contest/1999/problem/A
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >>n;

        int sum = (n/10)+(n%10);
        cout << sum << endl;
    }
    return 0;
}
