#include<iostream>
using namespace std;
void binarysearch(int arr[],int n,int element)
{
  int low=0,high=n-1,mid;
  
  while(low<=high)
  { mid=(high+low)/2;
    if(element==arr[mid])
  {
    cout<<"element found"<<endl;
    return;
  }
  if(element==arr[low])
  {
    cout<<"element found"<<endl;
    return;
  }
  if(element==arr[high])
  {
    cout<<"element found"<<endl;
    return;
  }
  if(element>arr[mid]){
    low=mid+1;
    high=high-1;
  }
  if(element<arr[mid]){
    low=low+1;
    high=mid-1;
  }
  }
  cout<<"element not found";
  return;
}
void linearsearch(int arr[],int n,int element)
{
  for(int i=0;i<n;i++)
  {
    if(arr[i]==element)
    {
      cout<<" the given element is present in our array";
      return;
    }
  }
  cout<<"the given element is not present in array";
}
int main()
{ int n;
  cout<<"Enter the size of array";
 cin>>n;
 int arr[n];
 for(int i=0;i<n;i++)
 {
   cout<<"Enter element for position "<<i+1;
   cin>>arr[i];
 }
 int b;
 cout<<"enter the element you want to check in array";
 cin>>b;
 binarysearch( arr,n,b);
}