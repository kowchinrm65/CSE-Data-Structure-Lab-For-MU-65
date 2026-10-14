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
    void push (int x)
    {
        Node *newNode= new Node;
        newNode->val =x;
        newNode->next=top;
        top=newNode;
    }
    int pop()
    {
        if (top==NULL)
        {
            cout<< "Stack Underflowed! Nothing to pop.\n";
            return -1;
        }
        Node *temp= top;
        int poppedval=temp->val;
        top=top->next;
        delete temp;
        return poppedval;
    }
    void printStack()
    {
        if (top==NULL)
        {
            cout<< "Stack is Empty";
            return ;
        }
        cout<< "Stack (Top to bottom): ";
        Node *cur=top;
        while (cur!=NULL)
        {
            cout<< cur->val<< " ";
            cur=cur->next;
        }
        cout<< "\n";
    }
};
int main ()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    cout<< "\nAfter pushes:\n";
    s.printStack();
    cout<< "\nPopped element: "<< s.pop() << "\n";
    cout << "\nAfter popping:\n";
    s.printStack();
    return 0;
}
