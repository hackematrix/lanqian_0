#include<iostream>
using namespace std;
#define maxn 10000001
int main()
{
    long long n;
    long long a[maxn],x;
    cin>>n>>x;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    long long ans=0;
    if(a[1]>x)
    {
        ans=ans+a[1]-x;
        a[1]=x;

    }
    for(int i=2;i<=n;i++)
    {
        if(a[i]+a[i-1]>x)
        {
            ans=ans+a[i]+a[i-1]-x;
            a[i]=x-a[i-1];
        }
    }
    cout<<ans<<endl;
    return 0;

}
