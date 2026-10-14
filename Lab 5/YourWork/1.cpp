#include<bits/stdc++.h>
using namespace std;
struct Node
{
  int val;
  Node *next;
};
struct Stack
{
    Node *top;
    Stack ()
    {
        top=NULL;
        cout<<"LInked list Stack iniatialized!\n";
    }
    bool isEmpty()
    {
        return top==NULL;
    }

};
int main ()
{
    Stack s;
    if (s.isEmpty())
    {
        cout<<"The stack is currently empty.\n";

    }
     return 0;
}
