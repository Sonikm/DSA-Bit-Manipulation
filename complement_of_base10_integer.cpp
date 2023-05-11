#include<iostream>
using namespace std;

int main()
{
    
   int n = 10;
   int x = 1;

   while(x <= n){
    n = n^x;
    x <<=1;
   } 

   cout << "Output: " << n << endl;

   return 0;
}