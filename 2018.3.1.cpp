#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i = 1,ans = 0,last=1;
    while(i!=0)
    {
        cin>>i;
        if(i==1)
        {    
            ans++;
            last=1;
        }
        else if(i==2)
        {
            if(last==1)
            {
                last=2;
                ans+=2;
            }
            else{
                last+=2;
                ans+=last;
            }
        }
        else
            {
                cout<<ans<<endl;
                break;
            }
    }
    return 0;
}