#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    double t,v[101],w[101],a[101],ans=0;
    cin>>n>>t;
    for(int i=1;i<=n;i++)
    {
        cin>>w[i]>>v[i];
        a[i]=v[i]/w[i];
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<n;j++)
        {
            if(a[j]<a[j+1])
            {
                swap(a[j],a[j+1]);
                swap(v[j],v[j+1]);
                swap(w[j],w[j+1]);
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(t-w[i]>0.000001)
        {
            t=t-w[i];
            ans+=v[i];
        }
        else
        {
            ans+=t*a[i];
            break;
        }
    }
    printf("%.2f",ans);
    return 0;

}
