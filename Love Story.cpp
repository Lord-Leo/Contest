#include<iostream>
using namespace std;

int main()
{
    int t,p;
    cin >> t;
    string x,y;

    for(int i=0; i<t; i++)
    {
        p=0;
        cin >> x;
        for(int j=0; j<10; j++)
        {
            y="codeforces";
            if(x[j]!=y[j])
            {
                p++;
            }
        }
        cout << p << endl;
    }

    return 0;
}
