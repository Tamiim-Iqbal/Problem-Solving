/**
 *   author:  TAMIM IQBAL
 *   created: 04/04/2024 15:52:40
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
        string s;
        cin>>s;
        int t = s.size();
        if(s[t-1]%2==0) cout<<"even"<<'\n';
        else cout<<"odd"<<'\n';
    }
    return 0;
}