#include<bits/stdc++.h>
using namespace std;
struct match
{
    int start;
    int end;

}M[1000005];
bool compare(match a,match b)
{
    return a.end<b.end;
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        scanf("%d %d",&M[i].start,&M[i].end);
    sort(M,M+n,compare);
    int ans=0;
    int last=0;
    for(int i=0;i<n;i++)
    {
        if(last<=M[i].start)
        {
            last=M[i].end;
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}
