#include<iostream>
using namespace std;
struct node{
  int data;
  node* next;
};
struct queue{
  node* front=NULL;
  node* rear=NULL;

};
void enqueue(queue *q,int data)
{
  if(q->front==NULL)
  {
    node * ptr=new node();
    ptr->data=data;
    cout<<data<<" inserted successfully at first\n";
    ptr->next=NULL;
    q->rear=ptr;
  q->front=ptr;
  }
  else {
  node *newnode=new node();
  newnode->next=NULL;
  newnode->data=data;
  cout<<data<<" inserted successfully\n";
  q->rear->next=newnode;
  q->rear=newnode;
  }
}
void atfirst(queue *q)
{
  cout<<"element at first is "<<q->front->data;
  return;
}
void atlast(queue *q)
{
  cout<<"element at last is "<<q->rear->data;
  return;
}
  void dequeue(queue *q )
  {
    node* ptr;
    ptr=q->front;
    cout<<q->front->data<<" deleted successfully\n";
    q->front=q->front->next;
    delete ptr;
  }
  void printqueue(queue *q)
  {
  node* ptr=q->front;
  cout<<"the elements in this queue are ";
  while(ptr!=NULL)
  {
    cout<<ptr->data<<" ";
    ptr=ptr->next;
  }
cout<<"\n";
  }

int main()
{
  queue * q=new queue;
  enqueue(q,1);
  enqueue(q,2);
  enqueue(q,3);
  enqueue(q,4);
  enqueue(q,5);
  enqueue(q,6);
  enqueue(q,7);
  enqueue(q,8);
  cout<<"queue before deletion\n";
  printqueue(q);
  dequeue(q);
  dequeue(q);
  dequeue(q);
  dequeue(q);
  cout<<"queue after deletion\n";
  printqueue(q);
  atfirst(q);
  atlast(q);
  
}