// A C/C++ Program to generate OTP (One Time Password)

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int sum=0;
	int arr[n-1];
	for(int i=0;i<n-1;i++){
	    cin>>arr[i];
	}
	for(int i=0;i<n-1;i++){
	    sum+=arr[i];
	}
	int total=n*(n+1)/2;
	cout<<total-sum;
	
	return(0);
}
