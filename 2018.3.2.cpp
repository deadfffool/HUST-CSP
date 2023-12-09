#include<bits/stdc++.h>
using namespace std;

int main()
{
    //1表示向右移动,-1表示向左移动
    //这个题目不是撞不都一样
    int n ,l ,t;
    cin>>n>>l>>t;

    vector<vector<int>> ball(n,vector<int> (2,1));
    for(int i=0;i<n;i++)
        cin>>ball[i][0];

    for(int tim=0;tim<t;tim++)
    {
        vector<short> map(l+2,0);
        for(int i=0;i<n;i++)
            map[ball[i][0]]++;
        for(int i=0;i<n;i++)
        {
            if(ball[i][0] == 0 && ball[i][1]==-1) ball[i][1] = -ball[i][1];
            else if (ball[i][0] == l && ball[i][1]==1) ball[i][1] = -ball[i][1];
            else if(map[ball[i][0]]>1) ball[i][1] = -ball[i][1];
            ball[i][0]+=ball[i][1];
        }
    }
    for(int i=0;i<n;i++)
        cout<<ball[i][0]<<' ';
    return 0;
}