#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 bool divide(vector<int>arr)//pass by value lia means yaha ki value change krne pe original array pe no asar.
 {
  int prefix=0,total_sum=0,n=arr.size();
  //Total sum
  for(int i=0;i<n;i++)
   total_sum+=arr[i];

   for(int i=0;i<n-1;i++){
   prefix+=arr[i];
   int ans=total_sum-prefix;
   if(ans==prefix)
   return 1;
  }
  return 0;

 }

int main(){
  int n;
  cout<<"Enter the size of the array"<<endl;
  cin>>n;
  vector<int>v(n);//vector name "V",size n
  cout<<"enter the element in array: ";
  for(int i =0;i<n;i++)
  cin>>v[i];
  cout<<divide(v);
}
