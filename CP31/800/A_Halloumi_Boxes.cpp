/**
 *   author:  TAMIM IQBAL
 *   created: 04/04/2024 00:25:55
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
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        if(is_sorted(a,a+n) || k>=2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}