// #include<iostream>
// using namespace std;
// int main(){
//    int num;
//    cout<<"Enter the number: ";
//    cin>>num;
//    int rem,ans=0,mult=1;
//    while(num>0){
//     rem=num%2;//remainder
//     ans=rem*mult+ans;//
//     mult=mult*10;
//     num=num/2;//quotient
//    }
//    cout<<"Binary equivalent: "<<ans<<endl;
// }


// same as above but by bitwise operator
#include<iostream>
using namespace std;
int main(){
   int num;
   cout<<"Enter the number: ";
   cin>>num;
   int rem,ans=0,mult=1;
   while(num>0){
    rem=num&1;//remainder
    ans=rem*mult+ans;//
    mult=mult*10;
    num=num/2;//quotient
   }
   cout<<"Binary equivalent: "<<ans<<endl;
}