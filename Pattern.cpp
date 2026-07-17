// #include<iostream>
// using namespace std;
// int main(){
//   int i,j;

//   for(i=1;i<=5;i++){
//     for(j=i;j<=5;j++){
//       cout<<i<<" ";
//     }
//     cout<<endl;
//   }
  
// }





  /*1 2 3 4 5
    1 2 3 4 5
    1 2 3 4 5
    1 2 3 4 5
    1 2 3 4 5*/

// #include<iostream>
// using namespace std;
// int main(){
//   int i,j;

//   for(i=1;i<=5;i++){
//     for(j=1;j<=5;j++){
//       cout<<j<<" ";
//     }
//     cout<<endl;
//   }
  
// }

/*5 4 3 2 1
  5 4 3 2 1
  5 4 3 2 1
  5 4 3 2 1
  5 4 3 2 1*/

  
// #include<iostream>
// using namespace std;
// int main(){
//   int i,j;

//   for(i=1;i<=5;i++){
//     for(j=5;j>=1;j--){
//       cout<<j<<" ";
//     }
//     cout<<endl;
//   }
  
// }


/*1 4 9 16 25
  1 4 9 16 25
  1 4 9 16 25
  1 4 9 16 25
  1 4 9 16 25*/


// #include<iostream>
// using namespace std;
// int main(){
//   int i,j;

//   for(i=1;i<=5;i++){
//     for(j=1;j<=5;j++){
//       cout<<j*j<<" ";
//     }
//     cout<<endl;
//   }
  
// }


/*a b c d e f 
  a b c d e f 
  a b c d e f 
  a b c d e f 
  a b c d e f */

// #include<iostream>
// using namespace std;
// int main(){
//   int i,j;

//   for(i=1;i<=5;i++){
//     for(j=0;j<=5;j++){
//       char ch='a'+j;
//       cout<<ch<<" ";
//     }
//     cout<<endl;
//   }
  
// }


// a a a a a a 
// b b b b b b 
// c c c c c c 
// d d d d d d 
// e e e e e e 
// f f f f f f

// #include<iostream>
// using namespace std;
// int main(){
//   int i,j;

//   for(i=0;i<=5;i++){
//     for(j=0;j<=5;j++){
//       char ch='a'+i;
//       cout<<ch<<" ";
//     }
//     cout<<endl;
//   }
  
// }


// a 
// b b 
// c c c 
// d d d d 
// e e e e e 
// f f f f f f 

// #include<iostream>
// using namespace std;
// int main(){
//   int i,j;
//   char ch;

//   for(i=0;i<=5;i++){
//     for(j=0;j<=i;j++){
//       ch='a'+i;
//       cout<<ch<<" ";
//     }
//     cout<<endl;
//   }
// }



// a 
// a b 
// a b c 
// a b c d 
// a b c d e 
// a b c d e f 


// #include<iostream>
// using namespace std;
// int main(){
//   int i,j;
//   char ch;

//   for(i=0;i<=5;i++){
//     for(j=0;j<=i;j++){
//       ch='a'+j;
//       cout<<ch<<" ";
//     }
//     cout<<endl;
//   }
// }






// 1 
// 2 1 
// 3 2 1 
// 4 3 2 1 
// 5 4 3 2 1

// #include<iostream>
// using namespace std;
// int main(){
//   int i,j;

//   for(i=1;i<=5;i++){
//     for(j=i;j>=1;j--){
      
//       cout<<j<<" ";
//     }
//     cout<<endl;
//   }
  
// }


// #include<iostream>
// using namespace std;
// int main(){
//   int i,j;
//   for(i=1;i<=5;i++){
//     for(j=1;j<=5-i+1;j++){
//       cout<<"*"<<" " ;
//     }
//     cout<<endl;
//   }
// }


// 5 4 3 2 1 
// 4 3 2 1 
// 3 2 1 
// 2 1 
// 1 
// #include<iostream>
// using namespace std;
// int main(){
//   int i,j;
//   for(i=5;i>=1;i--){
//     for(j=i;j>=1;j--){
//       cout<<j<<" " ;
//     }
//     cout<<endl;
//   }
// }


// 5 4 3 2 1 
// 4 3 2 1 
// 3 2 1 
// 2 1 
// 1 

// #include<iostream>
// using namespace std;
// int main(){
//   int i,j;
//   for(i=5;i>=1;i--){
//     for(j=i;j>=1;j--){
//       cout<<j<<" " ;
//     }
//     cout<<endl;
//   }
// }


// #include<iostream>
// using namespace std;
// int main(){
//   int i,j,n;
//   cout<<"Enter the number: ";
//   cin>>n;
//   for(i=1;i<=n;i++){
//     for(j=n;j>=n-i+1;j--){
//       cout<<j;
//     }
//     cout<<endl;
//   }
// }


//     *****
//    *****
//   *****
//  *****
// *****
// #include<iostream>
// using namespace std;
// int main(){
//   int i,j,n;
//   cout<<"Enter the number: ";
//   cin>>n;
//   for(i=1;i<=n;i++){
//     for(j=1;j<=n-i;j++){
//       cout<<" ";
//     }
//      for(j=1;j<=n;j++){
//       cout<<"*";
//     }
//     cout<<endl;
//   }
// }


//     *
//    **
//   ***
//  ****
// *****

// #include<iostream>
// using namespace std;
// int main(){
//   int i,j,n;
//   cout<<"Enter the number: ";
//   cin>>n;
//   for(i=1;i<=n;i++){
//     for(j=1;j<=n-i;j++){
//       cout<<" ";
//     }
//      for(j=1;j<=i;j++){
//       cout<<"*";
//     }
//     cout<<endl;
//   }
// }




//         * 
//       * * 
//     * * * 
//   * * * * 
// * * * * * 
// #include<iostream>
// using namespace std;
// int main(){
//   int i,j,n;
//   cout<<"Enter the number: ";
//   cin>>n;
//   for(i=1;i<=n;i++){
//     for(j=1;j<=n-i;j++){
//       cout<<"  ";// two spaces
//     }
//      for(j=1;j<=i;j++){
//       cout<<"* ";// star followed by a space
//     }
//     cout<<endl;
//   }
// }


    * 
   * * 
  * * * 
 * * * * 
* * * * *

#include<iostream>
using namespace std;
int main(){
  int i,j,n;
  cout<<"Enter the number: ";
  cin>>n;
  for(i=1;i<=n;i++){
    for(j=1;j<=n-i;j++){
      cout<<" ";
    }
     for(j=1;j<=i;j++){
      cout<<"* ";// star followed by a space
    }
    cout<<endl;
  }
}
