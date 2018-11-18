#include <iostream>
#include<cstring>
#include<stack>

using namespace std;
struct node {
int data;
node*next;
};

node *head=NULL;

void reverseSting(char C[],int n)
{
stack<char>S;
   for(int i=0;i<n;i++)
   {
      S.push(C[i]);
   }
   for(int i=0;i<n;i++)
   {
      C[i]=S.top();
      S.pop();
   }
   for(int i=0;i<n;i++)
   {
      cout<<C[i];
   }

}
void insertatbeg(int x)
{
   node *temp=new node();
   temp->data=x;
   temp->next=head;
   head=temp;

}
void reverseLinkedList()
{
stack<node*>S;
node *temp=head;
while(temp!=NULL)
{
   S.push(temp);
   temp=temp->next;
}
temp=S.top();
head=temp;
S.pop();
while(!S.empty())
{
   temp->next=S.top();
   S.pop();
   temp=temp->next;
}
temp->next=NULL;
}

void print(node *temp)
{
   if(temp==NULL)
      return;
   cout<<temp->data<<" ";
   print(temp->next);

}
int main(){

   //char c[50];
   //cin>>c;
   //reverseString(c,strlen(c));
insertatbeg(2);
insertatbeg(4);
insertatbeg(6);
insertatbeg(8);
print(head);
reverseLinkedList();
cout<<endl;
print(head);
}

