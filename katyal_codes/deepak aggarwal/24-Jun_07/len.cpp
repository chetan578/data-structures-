//Deepak Aggarwal, Coding Blocks

#include <iostream>
using namespace std;

// int len(char arr[], int n){
// int n is not required


int main(){

string arr;
cin>>arr;
char *i=arr[0];
char *j=arr[arr.length()-1]
bool ispalin=false;
while(*i<=*j)
{
   if(*i==*j)
   {
      ispalin=true;
   }
   j--;
   i++;
}
if(ispalin)
{
   cout<<"its a palindrome "<<endl;
}
else {
   cout<<"not a palindrome"<<endl;
}
}
