#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr,int n)
{
    for(int i=0;i=n-1;i++)
    {
        int min_ind=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min_ind])
            {
                min_ind=j;
            }
        }
        if(min_ind!=i)
        {
            swap (arr[min_ind],arr[i]);
        }
    }
}
void printArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<< " "<<endl;
    }
}
int main()
{
    int arr[]= {67,30,12,25,11};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<< "Unsorted array: "<<endl;

    printArray(arr,n);
    selectionSort(arr,n);
    cout<< "Sorted (selection): "<<endl;
    printArray(arr,n);
    return  0;
}
