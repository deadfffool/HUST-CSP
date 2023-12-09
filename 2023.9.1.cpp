#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int x,y;
    int x1=0,y1=0;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        x1+=x;
        y1+=y;
    }
    for(int i=0;i<m;i++)
    {
        cin>>x>>y;
        x+=x1;
        y+=y1;
        cout<<x<<' '<<y<<endl;
    }
    return 0;
}