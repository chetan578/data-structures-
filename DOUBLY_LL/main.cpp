#include <iostream>
using namespace std;

struct node {
int data;
node *prev;
node *next;
};

node *head =NULL;

void insertAtHead(int x )
{
node *temp =new node();
temp->data=x;
temp->prev=NULL;
temp->next=NULL;
if(head==NULL){
   head=temp;
   return;
   }
   head->prev=temp;
   temp->next=head;
   head=temp;
}
void insertAtTail(int x )
{
node *temp =new node();
temp->data=x;
temp->prev=NULL;
temp->next=NULL;
if(head==NULL)
{
   head=temp;
   return ;
}
node *temp1=head;
while(temp1->next!=NULL){
   temp1=temp1->next;
}
temp1->next=temp;
temp->prev=temp1;

}
void print(node *temp)
{
if(temp==NULL){
      return;
}
cout<<temp->data<<" ";
print(temp->next);

}
int main()
{

insertAtHead(2);
insertAtHead(4);
insertAtHead(6);
print(head);
cout <<endl;
insertAtTail(10);
insertAtTail(20);
insertAtTail(30);
print(head);
}
