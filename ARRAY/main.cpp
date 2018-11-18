#include <iostream>
#include<vector>
#include<string>
using namespace std;

void rotatemethod1(int arr[],int n ,int d)
{
   int temp[d];
for (int i=0;i<d;i++)
   {
      temp[i]=arr[i];
   }

for(int i=d;i<n;i++)
   {
      arr[i-d]=arr[i];
   }
   for(int i=0;i<d;i++)
    {
arr[n-d+i]=temp[i];
    }
    for(int i=0;i<n;i++)
    {
      cout<<arr[i]<<" ";
    }


}

void rotatemethod2(int arr[],int n,int d)
{
for(int j=0;j<d;j++)
{
int temp=arr[0];
for(int i=1;i<n;i++)
   arr[i-1]=arr[i];

arr[n-1]=temp;
}
 for(int i=0;i<n;i++)
      cout<<arr[i]<<" ";
}

void reverse (int arr[],int d ,int n)
{int i=d;
int j=n-1;
while(i<j)
{
   swap(arr[i],arr[j]);
   i++;
   j--;
}

}

void rotatemethod3(int arr[],int n,int d)
{
   reverse(arr,0,d);
   reverse(arr,d,n);
   reverse(arr,0,n);
   for(int i=0;i<n;i++)
      cout<<arr[i]<<" ";
}
void rotateright(int arr[],int n )
{
   int temp=arr[n-1];
   for(int i=n-1;i>0;i--)
   {
      arr[i]=arr[i-1];
   }
   arr[0]=temp;
   for(int i=0;i<n;i++)
      cout<<arr[i]<<" ";
}

void selectionSort(int arr[], int n)
{
    int i, j, min_idx;

    // One by one move boundary of unsorted subarray
    for (i = 0; i < n-1; i++)
    {
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[min_idx])
            min_idx = j;

        // Swap the found minimum element with the first element
        swap(arr[min_idx], arr[i]);
    }
}

void Binarysearch(int arr[],int start ,int end,int key )
{
   while(start<=end)
   {
      int mid=(start+end)/2;
      if(arr[mid]==key)
      {
      cout<<"found at index "<<mid<<endl;
      break;
      }
      else if(arr[mid]<key)
         start=mid+1;
      else
         end=mid-1;
   }
}
void rotatemethod4(vector<int>nums ,int k)
{
    for(int j=0;j<k;j++)
    {
        int temp =nums[nums.size()-1];
        for (int i=nums.size();i>=1;i--)
        nums[i]=nums[i-1];
        nums[0]=temp;
    }
    for(int i=0;i<nums.size();i++)
      cout<<nums[i]<<" ";
    }
    void fizzBuzz(int n) {
    vector<string>arr;
        for (int i=1;i<=n;i++){
            if(i%3==0)
                arr.push_back("Fizz");
            else if(i%5==0)
                arr.push_back("Buzz");
            else if(i%3==0 && i%5==0)
                arr.push_back("FizzBuzz");
            else
            arr.push_back(to_string(i));
          while(!arr.empty())
          {
             cout<<arr[i]<<" ";
          }
        }
    }
int main()
{
   vector<int> nums;
   nums.push_back(1);
   nums.push_back(2);
   nums.push_back(3);
   nums.push_back(4);
   nums.push_back(5);
   //int key;
   //cin>>key;
   //rotatemethod4(nums,key);
   fizzBuzz(nums,5);

 /*  int n,d;
   cout<<"enter total number of elements in the array"<<endl;
   cin>>n;
   cout<<"enter the nums you want to shift"<<endl;
   cin>>d;
   int arr[100];
cout<<"enter elements of the array"<<endl;
for(int i=0;i<n;i++)
   cin>>arr[i];
   int key;
   cout<<"enter element you want to find"<<endl;
   cin>>key;
   //reverse(arr,n);
   rotatemethod2(arr,n,d);
   //rotateright(arr,n);
   //int pivot =0;
   //for(int i=0;i<n;i++)
   //{
     // if(arr[i+1]<arr[i])
      //   pivot=i;
   //}
   //cout<<"pivot is "<<pivot<<endl;
   //Binarysearch(arr,0,pivot,key);
   //Binarysearch(arr,pivot+1,n-1,key);
   */
   //int arr[6]={10,6,4,3,2,1};
//selectionSort(arr,6);
//for(int i=0;i<6;i++)
   //cout<<arr[i]<<" ";
/*
int sum;
int flag=0;
cin>>sum;
for (int i=0;i<n;i++)
{
   for(int j=1;j<n;j++)
   {
      if(arr[i]+arr[j]==sum)
         flag=1;
   }
}
if(flag==1)
   cout<<"true"<<endl;
else
   cout<<"false"<<endl;
}
*/
}
