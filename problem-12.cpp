#include"bits/stdc++.h"
using namespace std;
int main()
{
    for(int i=1;i<=4;++i)
    {
        char k='A';
        for(int j=1;j<=7;++j)
        {
            if(j>=i && j<=8-i)
            {
                cout<<k;
                if(j<4)
                k++;
                else
                k--;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}