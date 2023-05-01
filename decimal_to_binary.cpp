#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int convertDecimalTobinary(int n) {
    
    int i = 0, ans = 0, rem;

    while (n)
    {
       rem = n % 2;
       ans += rem * pow(10, i++);
       n /= 2;
    }

    return ans;
    
}

int main()
{
    int n ;

    cout << "Enter any number: ";
    cin >> n;

    cout << "Answer is: " << convertDecimalTobinary(n) << endl;

   return 0;
}