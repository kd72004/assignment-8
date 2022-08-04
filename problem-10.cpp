#include"bits/stdc++.h"
using namespace std;
int main()
{
    for(int i=1;i<=4;++i)
    {
        for(int j=1;j<=7;++j)
        {
            if(j<=5-i || j>=3+i)
            {
                if(j==1 || j==7)
                cout<<1;
                else if(j==2 || j==6)
                cout<<2;
                else if(j==3 || j==5)
                cout<<3;
                else 
                cout<<4;
            }
            else 
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}