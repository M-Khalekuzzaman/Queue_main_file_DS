#include<bits/stdc++.h>
#include"myQueueUsingDoublyLinkList.h"
using namespace std;

typedef pair<int,int> myType;

int main()
{
    Queue <myType> que;
    int sz;
    cin>>sz;
    for(int i = 0; i<sz; i++)
    {
        int chk1,chk2;
        cin>>chk1>>chk2;
        que.enqueue(make_pair(chk1,chk2));
    }
    /*
    if(!que.empty()){
        myType chk;
        chk = que.mid();
        cout<<chk.first<<" | "<<chk.second<<endl;
    }
    */
    while(!que.empty())
    {
        myType chk;
        chk = que.dequeue();
        cout<<chk.first<<" | "<<chk.second<<endl;
    }

    if(!que.empty())
    {
        myType chk;
        chk = que.peakFront();
        cout<<chk.first<<" | "<<chk.second<<endl;
    }

    if(!que.empty())
    {
        myType chk;
        chk = que.peakBack();
        cout<<chk.first<<" | "<<chk.second<<endl;
    }




    return 0;
}
