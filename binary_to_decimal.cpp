#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int convertBinaryToDecimal(int n) {
    
    int i = 0, ans = 0, rem;

    while (n)
    {
       rem = n&1;
       ans += rem * pow(2, i++);
       n = n/10;
    }

    return ans;
    
}

int main()
{
    int n ;

    cout << "Enter any number: ";
    cin >> n;

    cout << "Answer is: " << convertBinaryToDecimal(n) << endl;

   return 0;
}