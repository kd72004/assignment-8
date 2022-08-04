#include"bits/stdc++.h"
using namespace std;

int main()
{
    int i,j;
    for(int i=1;i<=5;++i)
    {
        for(int j=1;j<=5;++j)
        {
            if(j>=6-i && j<=5)
            {
                cout<<"*";
            }
            else 
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}