#include<iostream>
using namespace std;
void bubblesort(int arr[],int n)
{
  for (int i = 0; i < n-1; i++)
  {
    for(int j=1;j<n-i;j++)
    {
     if(arr[j-1]>arr[j])
     {
       int temp;
       temp=arr[j-1];
       arr[j-1]=arr[j];
       arr[j]=temp;
     }
    }
  }
  cout<<"the sorted array is ";
  for(int k=0;k<n;k++)
  cout<<arr[k]<<" ";
}
int main()
{ int n;
  cout<<"enter the size of array";
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  cout<<"the unsorted array is ";
  for(int h=0;h<n;h++)
  {
    cout<<arr[h]<<" ";
  }
  bubblesort(arr,n);
}