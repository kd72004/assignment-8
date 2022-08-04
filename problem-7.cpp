#include "bits/stdc++.h"
using namespace std;

int main()
{
    for (int i = 1; i <= 5; ++i)
    {
        for (int j = 1; j <= 10; ++j)
        {
            if (i > 1)
            {
                if (j >= 7 - i && j <= 4 + i)
                {
                    cout << " ";
                }
                else
                    cout << "*";
            }
            else
            {
                cout << "*";
            }
        }
        cout<<endl;
    }
}