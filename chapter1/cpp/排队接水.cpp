#include<bits/stdc++.h>
using namespace std;
#define N 1001
int a[N],t[N];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        t[i]=i;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<n;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
                swap(t[j],t[j+1]);
            }
        }
    }
    double sum=0,s;
    for(int i=1;i<=n;i++)
    {
        sum=sum+a[i]*(n-i);
    }
    s=sum/n;
    for(int i=1;i<=n;i++)
        cout<<t[i]<<" ";
    cout<<endl;
    printf("%.2f",s);
    return 0;
}
