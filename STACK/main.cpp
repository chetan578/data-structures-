#include <iostream>
#include<stack>
using namespace std;


/*
array implementation of stacks
int top=-1;
   int arr[100];

void push(int x )
{
   if(top==100){
     cout<<"stack overflow"<<endl;
      return;
   }
top++;
arr[top]=x;
}
void pop()
{
   if(top==-1){
      cout<<"no element to pop"<<endl;
      return;
   }
   top--;
}
void print()
{
   for(int i=0;i<=top;i++)
   {
      cout<<arr[i]<<" ";
   }
}
*/
struct node{
int data;
node* link;

};

node *top=NULL;

void push(int x )
{
   node *temp=new node();
   temp->data=x;
   temp->link=top;
   top=temp;
}

void pop()
{
   if(top==NULL)
      return ;
   node *temp=top;
   top=top->link;
   delete(temp);

}
void print(node *temp)
{
   if(temp==NULL){
      return ;
   }
   cout<<temp->data<<" ";
   print(temp->link);
}
int main()
{  push(2);
   push(4);
   print(top);
   cout<<endl;
   pop();
   print(top);
}
