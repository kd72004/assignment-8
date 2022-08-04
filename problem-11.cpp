#include<bits/stdc++.h>
using namespace std;
int main()
{
    for(int i=1;i<=5;i++)
    {
        char k='A';
        for(int j=1;j<=9;++j)
        {
            if(j>=6-i && j<=4+i)
            {
                cout<<k;
                if(j<5)
                k++;
                else 
                k--;
            }
            else 
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }

}