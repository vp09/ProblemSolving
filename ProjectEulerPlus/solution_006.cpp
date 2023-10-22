/*
https://www.hackerrank.com/contests/projecteuler/challenges/euler006
*/
#include <bits/stdc++.h>

using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long s1=(n*(n+1))/2;
        long s2=(s1*(2*n+1))/3;
        s1*=s1;
        cout<<(s1-s2)<<endl;
    }
    return 0;
}
