#include<iostream>
using namespace std;
struct node
{
  int data;
  node* next;
};
void printdata(node* head)
{
  node* temp=head;
  while(temp!=0)
  {
    cout<<"\n Element ="<<temp->data<<" ";
    temp=temp->next;
    
  }cout<<endl;
  return;
}
node* insertatbeg(node* head,int data1)
{
  node* newnode= new node();
  newnode->next=head;
  newnode->data=data1;
  head=newnode;
  cout<<"insertion done successfully of "<<data1;
  return(head);
}
void insertater(node* prevnode,int data1)
{
  node* newnode=new node();
  newnode->data=data1;
  newnode->next=prevnode->next;
  prevnode->next=newnode;
  cout<<"inserted element is "<<data1;
  return;

}
node* atend(node* head,int data1)
{
  node* newnode=new node();
newnode->next=NULL;
  node* temp=head;
  while(temp->next!=0)
  {
    temp=temp->next;

  }
  temp->next=newnode;
  cout<<"insertion done successfully";
  return(head);

}
node* atpos (node* head,int n,int data1)
{
  node* temp=head;
int i=0;
while(i<n-1){
  temp=temp->next;
  i++;
}
node* newnode= new node();
newnode->data=data1;
newnode->next=temp->next;
temp->next=newnode;
return(head);
}
void erase1(node* head,int n){
  node* temp=head;
  int i=0;
  while(i<n-1){
    temp=temp->next;
  }
  node* temp1;
  temp1=temp->next;
  temp->next=NULL;
  delete temp1;
  return;

}

int main()
{ int a,b,c;
node* head=new node();
node* sec=new node();
node* third=new node();
cout<<"enter threee value you want to insert"<<endl;
cin>>a>>b>>c;
head->next=a;
sec->next=b;
third->next=c;
printdata(head);
int k,j;
cout<<"enter the value you want to insert at begining and enter the value you want to insert at third position "<<endl;
cin>>k,j;
head=insertatbeg(head,k);
insertater(sec,j);
printdata(head);
}
