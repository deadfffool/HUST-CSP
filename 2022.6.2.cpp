#include <bits/stdc++.h>
using namespace std;

int main()
{
    set <pair<int,int > > p;
    int n,s,l;
    int x,y,ans=0;
    cin>>n>>l>>s;
    int b[s+1][s+1];
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        p.insert({x,y});
    }

    for(int i=s;i>=0;i--)
        for(int j=0;j<=s;j++)
            cin>>b[i][j];
    
    for(auto it:p)
    {
   
        if(it.first<=l-s && it.second<=l-s)
        {
            int flag=1;
            for(int i=s;i>=0;i--)
                for(int j=0;j<=s;j++)
                {
                    int a = p.count({it.first+i,it.second+j});
                    if(b[i][j]==0)
                    {
                        if(a)
                            flag=0;
                    }
                    else
                        if(!a)
                            flag=0;
                } 
            if(flag)
                ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}