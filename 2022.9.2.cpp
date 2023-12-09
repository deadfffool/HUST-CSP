#include<bits/stdc++.h>
using namespace std;

typedef int ushort;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ushort n,x,m=0;
    cin>>n>>x;
    ushort book[n];
    for(ushort i=0;i<n;i++)
    {  
        cin>>book[i];
        m+=book[i];
    }
    vector<ushort> dp(m+1,0);

    for(ushort i=0;i<n;i++)
        for(ushort j=m;j>=book[i];j--)
            dp[j] = max(dp[j],dp[j-book[i]]+book[i]);

    for(int j=0;j<m;j++)
        if(dp[j]>=x)
        {
            cout<<dp[j]<<endl;
            return 0;
        }
    return 0;
}