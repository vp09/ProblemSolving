/*
https://www.hackerrank.com/contests/projecteuler/challenges/euler003
*/

#include <bits/stdc++.h>

using namespace std;


int main() {
    int t;
    cin>>t;
    while(t-- > 0)
        {
        long long int n;
        cin>>n;
        long long int p=1,f;
        for(f=2;f*f<=n;f++)
            {
            while(n%f==0)
                {
                p=f;
                n/=f;
            }
        }
            if(n>1)p=n;
            cout<<(p)<<endl;
        }
    return 0;
}
