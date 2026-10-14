#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int val;
    Node *next;
};
struct Queue
{
    Node *headptr;
    Queue()
    {
        headptr=NULL;
        cout<< "STL style queue initialized\n";
    }
    bool empty()
    {
        return headptr==NULL;
    }
};
int main()
{
    Queue q;
    if(q.empty())
    {
        cout<< "The queue is currently empty.\n";

    }
    return 0;
}
