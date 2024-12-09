#include<bits/stdc++.h>
using namespace std;
template<typename item>
class smallest_heap
{
private:
    item heap[10001];
    int len;
public:
    smallest_heap();
    void push(item const &);
    void pop();
    item top();
    int size();
    bool empty();
};

template<typename item>
smallest_heap<item>::smallest_heap()
{
    len=0;
    memset(heap,0,sizeof(heap));
}

template<typename item>
 void smallest_heap<item>::push(item const &n)
{
    heap[++len]=n;
    int son=len,father=son/2;
    while(heap[son]<heap[father]&&father>=1)
    {
        swap(heap[son],heap[father]);
        son=father;
        father=son/2;
    }
}

template<typename item>
void smallest_heap<item>::pop()
{
    swap(heap[1],heap[len]);
    heap[len--]=0;
    int father=1;
    int son=2;
    while(son<=len)
    {
        if(son<len&&heap[son]>heap[son+1])
            son=son+1;
        if(heap[father]>heap[son])
        {
            swap(heap[father],heap[son]);
            father=son;
            son=father*2;
        }else break;
    }
}

template<typename item>
item smallest_heap<item>::top()
{
    return heap[1];
}

template<typename item>
int smallest_heap<item>::size()
{
    return len;
}
template<typename item>
bool smallest_heap<item>::empty()
{
    return len;
}
smallest_heap<int>h;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        h.push(a);
    }
    int ans=0;
    while(h.size()>1)
    {
        int x=h.top();
        h.pop();
        int y=h.top();
        h.pop();
        h.push(x+y);
        ans+=x+y;

    }
    cout<<ans<<endl;
    return 0;
}
