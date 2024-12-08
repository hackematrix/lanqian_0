#include<bits/stdc++.h>
using namespace std;
const int N=200010;
long long a[N],sum[N];

int main()
{
    long long n;
    cin>>n;
    for(long long i=1;i<=n;i++)
        cin>>a[i];
    for(long long i=1;i<=n;i++)
        sum[i]=sum[i-1]+a[i];
    long long m;
    cin>>m;
    long long l,r;
    for(long long i=1;i<=m;i++)
    {
        cin>>l>>r;
        cout<<sum[r]-sum[l-1]<<endl;

    }
    return 0;

}
