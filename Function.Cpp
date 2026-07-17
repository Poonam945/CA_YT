// #include<iostream>
// using namespace std;
// int sum(int a,int b){
//   int sum=a+b;
//   return sum;
// }
// int  main(){
//   int m,n;
//   cout<<"Enter 2 no"<<endl;
//   cin>>m>>n;
//   cout<<sum(m,n);
// }


// #include <iostream>

// int main() {
//     std::cout << "----------------------" << std::endl;
//     std::cout << "HELLO! THE CODE WORKS!" << std::endl;
//     std::cout << "----------------------" << std::endl;
//     return 0;
// }
// #include<iostream>
// using namespace std;

// int sum(int a,int b){
//   int sum=a+b;
//   return sum;
// }
// int main(){
//   int m,n;
//   cout<<"Enter 2 no"<<endl;
//   cin>>m>>n;
//  cout<<sum(m,n);

// }


//Prime no
#include<iostream>
using namespace std;
bool prime(int n){
    if(n<2){// not while coz while creates a loop but u just need to che ck  a single condn.
      return 0;

    }
    for(int i=2;i<n;i++){
      if(n%i==0){
        return 0;
      }
    }
    return 1;
}
//Factorial
int Fact(int n){
  int Fact=1;
  for(int i=1;i<=n;i++){
    Fact=Fact*i;
  }
  return Fact;
  
}



int main(){
  int n;
  cout<<"Enter the no";
  cin>>n;
  cout<<prime(n);//btaoo n prime hai ya nhi ..call jayega
  cout<<endl;
  cout<<Fact(n);

}