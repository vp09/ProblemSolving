// Problem link
// https://www.hackerrank.com/contests/projecteuler/challenges/euler002/problem?isFullScreen=true

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

void printFib(long num){
    long result = 0;
    long prev2 = 1;
    long prev1 = 2;
    long curr = prev1;
    while(curr<=num){
        if(curr%2==0){
            result += curr;
        }
        curr = prev1+prev2;
        prev2 = prev1;
        prev1 = curr;
    }
    cout<<result<<endl;
}


int main()
{
    string t_temp;
    getline(cin, t_temp);

    int t = stoi(ltrim(rtrim(t_temp)));

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string n_temp;
        getline(cin, n_temp);

        long n = stol(ltrim(rtrim(n_temp)));
        printFib(n);
    }

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
