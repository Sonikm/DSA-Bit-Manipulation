#include<iostream>
using namespace std;

int find1sComplement(int n) {
   
  /*....................Approach 1.................................*/
   if(n == 0) return 1;
//    int x = 1;
 
//    while(x <= n){
//     n = n^x;
//     x <<=1;
//    } 
  
//   return n;

  /*.........................Approach 2.................................*/

  int m = n;
  int marks = 0;

  while (m)
  {
    marks = (marks << 1) | 1;
    m >>= 1;
  }

   int ans = (~n) & marks;
   return  ans;
}

int main()
{
    
   int n;

   cout << "Enter input: ";
   cin >> n;

   cout << "Output: " << find1sComplement(n) << endl;

   return 0;
}