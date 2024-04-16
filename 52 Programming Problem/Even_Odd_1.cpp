/**
 *   author:  TAMIM IQBAL
 *   created: 04/04/2024 15:44:56
**/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n%2==0) cout<<"even"<<'\n';
        else cout<<"odd"<<'\n';
    }
    return 0;
}