#include<iostream>
using namespace std;
int main ()
{
    int a=10;
    int *ptr=&a;
    *ptr=20;
    cout<<"Value of a: "<<a<<endl;
    cout<<"Dereferend pointer value: "<<*ptr<<endl;
    return 0;

}
