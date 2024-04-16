/**
 *   author:  TAMIM IQBAL
 *   created: 04/04/2024 16:03:50
**/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int j=0;
    for(int i=1000; i>=1; i--)
    {
        cout<<i<<" ";
        j++;
        if(j==5)
        {
            cout<<'\n';
            j=0;
        }
    }

    return 0;
}