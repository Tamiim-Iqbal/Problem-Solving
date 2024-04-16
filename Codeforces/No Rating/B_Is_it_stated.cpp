/**
 *   author:  TAMIM IQBAL
 *   created: 03/04/2024 01:38:11
**/
/**  When I wrote this code,
 *   only Allah and I knew what I did.
 *   Now, only Allah knows.
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
        int flag = s.find("it");
        if(flag != string::npos)
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}