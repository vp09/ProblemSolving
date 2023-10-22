/*
https://www.hackerrank.com/contests/projecteuler/challenges/euler003
*/

#include <bits/stdc++.h>

using namespace std;

long rev(long num)
{
    long sum=0,a;
    while(num!=0)
    {
        a=num%10;
        sum=sum*10+a;
        num=num/10;
    }
    return sum;
}


int main() {
    long long int t;
    cin>>t;
    long long int k,i,j,num,prod,thres=101101,o=0;
    while(t--)
    {
        cin>>num;
		thres=101101;
		for(i=100;i<1000;i++)
		{
			if(i>300)
				k=i;
			else
				k=300;
			for(j=k;j<1000;j++)
			{
				prod=i*j;
				if((rev(prod/1000)==prod%1000)&&prod<num&&prod>=thres)
				{
					thres=prod;
				}
			}
		}
        cout<<thres<<endl;
    }
    return 0;
}
