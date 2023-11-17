//https://codeforces.com/contest/1899/problem/A
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N,a;
    cin >>N;

    for(int i=0; i<N; i++)
    {
        cin >>a;
        if(a%3==0)
        {
            cout << "Second" << endl;
        }
        else
        {
            cout << "First" << endl;
        }
    }
    return 0;
}
