#include <iostream>
using namespace std;
#include<vector>
struct node{
int data;
node*next;
};


int count =0;
int counts=0;
int counter=0;

/*
void reversebyiteration(node *head){
node *current ,*prev,*next;
prev=NULL;
current=head;
while(current!=NULL)
{
   next=current->next;
   current->next=prev;
   prev=current;
   current=next;
}
head=prev;

}
void remove(int n)
{
if(head==NULL)
{
   cout<<"no element to delete "<<endl;
   return ;
}
   node *temp1=head;
   if(n==1)
   {
   head=head->next;
   delete(temp1);
   return;
   }
   else {

   for(int i=1;i<n-1;i++)
   {
      temp1=temp1->next;
   }
   node *temp2=temp1->next;
   temp1->next=temp2->next;
   delete(temp2);
   }
}
*/
node* insertatend(node *head,int x )
{
      node *temp=new node();
   temp->data=x ;
   temp->next=NULL;
   if(head ==NULL)
   {
head=temp;
}
else {
   node *temp1=head;
   while(temp1->next!=NULL)
   {
      temp1=temp1->next;
   }
   temp1->next=temp;
}
return head;
}
/*
void insert(int x ,int n)
{
node *temp=new node();
temp->data=x ;
temp->next=NULL;
if(n==1)
{
   temp->next=head;
   head =temp;
   return ;
}
else {
   node *temp1=head;
   for(int i=1;i<n-1;i++)
   {
      temp1=temp1->next;
   }
   temp->next=temp1->next;
   temp1->next=temp;
}

}
void insertatbeginning(int x )
{
   node* temp=new node();
   temp->data=x ;
   temp->next=head;
   head =temp;

}
*/
void printByRecursion(node *temp)
{
   if(temp==NULL)
      return ;
      cout<<temp->data<<" ";
   printByRecursion(temp->next);

}
/*
void print()
{
   if(head==NULL)
      cout<<"linked list is empty "<<endl;
   node *temp=head;
   while(temp!=NULL)
   {
      cout<<temp->data<<" ";
      temp=temp->next;
   }
}


void reverseByRecursion(node *p)
{
   if(p->next==NULL)
   {
      head=p;
      return ;
   }
   reverseByRecursion(p->next);
node *q=p->next;
q->next=p;
p->next=NULL;

}
void insertafter(int x,int data )
{
   node *temp1=new node();
   temp1->data=data;
   temp1->next=NULL;
   node *temp=head;
   while (temp->data!=x)
   {
      temp=temp->next;
   }
   temp1->next=temp->next;
   temp->next=temp1;
}

void deletenode(int x )
{
   node*temp=head;
   node *prev;
   if(temp->data==x &&temp!=NULL)
     {
      head=head->next;
      delete(temp);
      return;
     }

   while(temp->data!=x && temp!=NULL)
   {
      prev=temp;
      temp=temp->next;
   }
   if(temp==NULL)
      return ;
   prev->next=temp->next;
   delete(temp);

}

void deletelinkedlist()
{
node *temp=head;
node *temp1;

while(temp!=NULL)
{  temp1=temp->next;
   delete(temp);
   temp=temp1;
}
head=NULL;
}


int findcount()
{
   int count =0;
   node *temp=head;
   while(temp!=NULL)
   {
      count++;
      temp=temp->next;
   }
   return count ;
}

int findcountbyrecursion(node*temp)
{
      if(temp==NULL)
         return count;
   count++;
  return findcountbyrecursion(temp->next);

}

bool search(int x )
{
node *temp=head;
while(temp!=NULL)
{
if(temp->data==x)
   return true;
temp=temp->next;
}
return false;
}

bool searchbyrecursion(node*temp,int x)
{
   if(temp==NULL)
         return false ;
   if(temp->data==x)
      return true;
   return searchbyrecursion(temp->next,x);

}


int getnode(int index)
{
   node*temp=head;
   while(temp!=NULL)
   {
      if(count==index)
         return temp->data;
      count++;
      temp=temp->next;
   }
   return -1;
}

int getnodebyrecursion(int count ,node*temp,int index)
{
   if(temp==NULL)
      return -1;
   if(count==index)
         return temp->data;
      count++;
   return getnodebyrecursion(count ,temp->next,index);
}

int getnodefromlast(int index)
{
   int count=0;
   node*temp=head;
   while(temp!=NULL)
   { count++;
   temp=temp->next;
   }
   temp=head;
   int x =count-index;
   for(int i=0;i<x;i++)
      temp=temp->next;
   return temp->data;
   }


void getnodefromlastbyrecursion(node *head,int n)
{
static int i = 0;
    if (head == NULL)
       return;
  getnodefromlastbyrecursion(head->next, n);
    if (++i == n)
   {
      cout<<head->data<<endl;
   }
}

int getnodefromlast_by_two_pointers(int n)
{
   node *refer=head;
   node* main=head;
   for(int i=0;i<n;i++)
      refer=refer->next;
   while(refer!=NULL)
   {
      main=main->next;
      refer=refer->next;
   }
   return main->data;
}

int printmiddle()
{
   node *temp=head;
   while(temp!=NULL)
   {
      temp=temp->next;
      count++;
   }
   temp=head;
   for(int i=0;i<count/2;i++)
      temp=temp->next;
   return temp->data;
}
int printmiddle(node *slow,node*fast)
{
   int count =0;
   while(fast!=NULL && fast->next!=NULL){
      slow=slow->next;
      fast=fast->next->next;
      count++;
   }
   return count;
}
int printmiddle(node *middle)
{

   while(head!=NULL)
   {
      if(counter%2!=0)
         middle=middle->next;

      counter++;
      head=head->next;
   }
   return middle->data;
}

int countofnode(int key)
{
   int count =0;
node *temp=head;
while(temp!=NULL)
{
   if(temp->data==key)
   {
      count++;
   }
    temp=temp->next;
}
   return count ;
}

int countofnode(node *temp,int key)
{
   if(head==NULL)
   return -1;
   if(temp==NULL)
      return counts;
   if(temp->data==key)
      counts++;

   return countofnode(temp->next,key);

}

void movelastnodetofirst()
{
  if(head==NULL ||head->next==NULL)
   return;
   node *temp=head;
   node *prev=NULL;

   while(temp->next!=NULL)
   {
      prev=temp;
      temp=temp->next;
   }
   temp->next=head;
   prev->next=NULL;
   head=temp;
}
void deletemiddle()
{
   if(head==NULL)
      return ;
   if(head->next==NULL)
     { delete(head);
       return;
       }
   int mid=printmiddle(head,head);
   node*temp=head;
   node*prev=head;
   for(int i=0;i<mid;i++)
     {
         prev=temp;
      temp=temp->next;
   }
   prev->next=temp->next;
   delete(temp);
}
void insertatmiddle(int x)
{
   if(head==NULL)
      return;
   node *temp=new node ();
   temp->data=x;
   temp->next=NULL;

   node *slow =head;
   node*fast=head->next;
   while(fast&& fast->next)
   {
      fast=fast->next->next;
      slow=slow->next;
   }
   temp->next=slow->next;
   slow->next=temp;
}


void removeDuplicate()
{
if(head==NULL ||head->next==NULL)
   return ;
   node *current=head;
   node*next_next=NULL;
   while(current->next!=NULL)
   {
   if(current->data==current->next->data)
   {
      next_next=current->next->next;
      delete(current->next);
      current->next=next_next;
   }
   else {
      current=current->next;
   }
}
}

void removeDuplicateFromUnsortedList(int key)
{
   int count=0;
   if(head==NULL ||head->next==NULL)
      return;
   node*current=head;
   node*temp=head;
   while(current &&current->next)
   {
      temp=current;
   while(temp->next!=NULL)
   {
   if(temp->next->data==current->data)
      {
      node *temp1=temp->next;
      temp->next=temp->next->next;
      delete(temp1);
      count++;
      }
      else
      {
   temp=temp->next;
}
}
current=current->next;
}
while (temp->next!=NULL)
   temp=temp->next;
   for(int i=0;i<count;i++)
{
node *temp2 =new node ();
temp2->data=key ;
temp2->next=NULL;
temp->next=temp2;
temp=temp2;
}
}

void deletealternatenodes()
{
node*prev;
node*temp;
prev=head;
temp=head->next;

while(prev!=NULL && temp!=NULL)
{
prev->next=temp->next;
delete(temp);
prev=prev->next;
if(prev!=NULL)
temp=prev->next;
}
}

void DeleteNodeWithACondition()
{
   //problem in code
   //check later and solve the question
   node*prev=head;
   node*temp=head;
   while(temp!=NULL)
   {
   if(temp->data<temp->next->data)
   {
      if(head==temp)
      {
         head=head->next;
         delete(temp);
         temp=head;
      }
      else{
      prev->next=temp->next;
      delete(temp);
      temp=prev->next;
   }
   prev=temp;
   temp=temp->next;
   }
   }
}

void delete_N_nodesAfter_M_nodes(int m,int n)
{
node *temp=head;
node *prev=NULL;
int i=0;
while(i<m){
   prev=temp;
   temp=temp->next;
   i++;
}

for(i=0;i<n;i++)
{
   prev->next=temp->next;
   delete temp;
   temp=prev->next;
}
}
void deletenodes(node *head ,int K)
{
node *temp=head ;
node *prev=NULL;
int j=0;
node *current=temp;
while(current->next!=NULL)
{
   while(j<K-1)
{     prev=temp;
    temp=temp->next;
    j++;
}
prev->next=temp->next;
delete temp;
temp=prev->next;
current=temp;
}
}
void deletenodefromlast(node *head ,int n)
{
      int count =0;
        node *temp=head;
        while (temp!=NULL)
        {
            count++;
            temp=temp->next;
        }

  if(n==count)
         head=head->next;//cout<<count<<endl;
        else {
        temp=head;
        node *prev=NULL;
        int i=0;
    while (i<count-n)
        {
            prev=temp;
            temp=temp->next;
            i++;
        }
        prev->next=temp->next;
        delete temp;

}
}
bool hascycle(){
    node*slow =head;
      node*fast=head->next;
        if(head == NULL || head->next==NULL ||head->next->next==NULL)
            return false ;
        while(fast && fast->next)
        {
            if(slow==fast)
                return true ;
                else
        return false ;
slow=slow->next;
fast=fast->next->next;
    }
}
void rearrange(node *head )
{
    int i=0;
    int j=0;
    vector<int>even;
    vector<int>odd;
   node *temp=head ;
   while(temp!=NULL)
   {
    if((temp->data)%2==0)
   {
       even.push_back(temp->data);
   }
   else
   {
   odd.push_back(temp->data);
   }
   temp=temp->next;
   }
   temp=head;
   int count =0;
   for(int i=0;i<odd.size();i++)
   {
      temp->data=odd[i];
      temp=temp->next;
      count++;
   }
   for(int i=0;i<even.size();i++)
   {
      temp->data=even[i];
      temp=temp->next;
   }
}
*/

node* findintersection(node *head1,node *head2,node*head3)
{
   vector<int>x;
node *t1=head1;
node *t2=head2;
while(t1 && t2)
{

   if(t1->data==t2->data)
   {
      x.push_back(t1->data);
      t1=t1->next;
      t2=t2->next;
   }
   else if(t1->data<t2->data)
   {
      t1=t1->next;
   }
   else
      t2=t2->next;
}
for(int i=0;i<x.size();i++)
{
   insertatend(head3,x[i]);
}
return head3;
}
/*
void changenodes(int x ,int y)
{
   node *t1,*p1,*n1,*t2,*p2,*n2;
   t1=head;
   t2=head;
   p1=NULL;
   p2=NULL;

   while(t1&& t1->data!=x)
   {p1=t1;
   t1=t1->next;
   }
   n1=t1->next;
   while(t2 && t2->data!=y)
   {
      p2=t2;
      t2=t2->next;
   }
   if(t1==NULL || t2==NULL )
      return ;

      if (p1 != NULL)
       p1->next = t2;
   else // Else make y as new head
       head = t2;

   // If y is not head of linked list
   if (p2 != NULL)
       p2->next = t1;
   else  // Else make x as new head
       head = t1;

   n2=t2->next;
   t2->next=t1->next;
   t1->next=n2;
}
void swapelements()
{
node *temp=head;
while( temp && temp->next)
{
int x =temp->data;
temp->data=temp->next->data;
temp->next->data=x;
temp=temp->next->next;
}
}

*/
int main()
{
   node *head1=NULL,*head2=NULL,*head3=NULL;
head1 =insertatend(head1,5);
head1 =insertatend(head1,4);
head1 =insertatend(head1,3);
head1 =insertatend(head1,2);
head1 =insertatend(head1,1);
head2 =insertatend(head2,10);
head2 =insertatend(head2,4);
head2 =insertatend(head2,3);
head2 =insertatend(head2,12);
head2 =insertatend(head2,14);
printByRecursion(head1);
cout<<endl;
printByRecursion(head2);
head3=findintersection(head1,head2,head3);
cout<<"hello"<<endl;
printByRecursion(head3);
//swapelements();
//cout<<endl;
//print();
}

