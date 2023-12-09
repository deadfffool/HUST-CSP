#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<array<int, 5> > num(m+1);
    for(int i=1;i<=m;i++)
        cin>>num[i][0];
    for(int i=1;i<=m;i++)
    {
        cin>>num[i][1];

        num[i][3]=n;
        num[i][4]=n+1;

        if(num[i][0]==0)
            num[i][2]=1;
        else
            num[i][2]=0;
    }
    for(int i=1;i<=m;i++)
    {
        if(num[i][0]!=0)
        {
            if(num[num[i][0]][2]!=0)
                num[i][2]=num[num[i][0]][2]+num[num[i][0]][1];
            else{
                int pre = num[i][0],tim = 0;
                while(!num[pre][2])
                {
                    tim += num[pre][1];
                    pre = num[pre][0];
                }
                num[i][2] = num[pre][2]+num[pre][1]+tim;
            }   
        }
        cout<<num[i][2]<<' ';
    }

    for(int i=1;i<=m;i++)
        if(num[i][1]+num[i][2]-1>n)
            return 0;

    cout<<endl;
    for(int i=m;i>=1;i--)
    {
        if(num[i][4]==n+1)
        {
            num[i][3]=n-num[i][1]+1;
            num[num[i][0]][4] =min(num[i][3],num[num[i][0]][4]);
            continue;
        }
        num[i][3]=num[i][4]-num[i][1];
        num[num[i][0]][4]=min(num[i][3],num[num[i][0]][4]);
    }

    for(int i=1;i<=m;i++)
        cout<<num[i][3]<<' ';
    return 0;
}