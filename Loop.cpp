// #include<iostream>
// using namespace std;
// int main(){
//   int i,n;
//   int sum=0;
//   cout<<"Enter number: "<<endl;
//   cin>>n;
//   for(i=1;i<=n;i=i+1){
//     sum=sum+i*i;
//   }
//   cout<<sum;
// }

//Prime number

// #include<iostream>
// using namespace std;
// int main(){
//   int i,n;
//   cin>>n;
//   if(n<2){
//     cout<<"Not prime";
//     return 0;
//   }
//   else{
//   for(i=2;i<n;i++){
//     if(n%i==0)
//       cout<<"Not prime";
//       return 0;
//   }
      
//       cout<<"Prime";
//       return 0;
//       }


//     }


//Fibonacvi series
#include<iostream>
using namespace std;
int main(){
  int last=0,prev=1,n,curr;
  cin>>n;
  cout<<last<<" "<<prev<<" ";
  for(int i=0;i<=n;i++){
    curr=last+prev;
    cout<<curr<<" ";
    last=prev;
    prev=curr;
  }
}