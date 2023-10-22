#include <bits/stdc++.h>

using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long int f=2;
        long long int p=1;
        while(f<=n)
        {
            long long int m=f;
            if(p%f!=0)
            {
                while(m<=n)
                m*=f;
                m/=f;
                p*=m;
            }
            f++;
        }
        cout<<(p)<<endl;
    }
    return 0;
}
