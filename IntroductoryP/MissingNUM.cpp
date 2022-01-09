#include<bits/stdc++.h>
using namespace std;

int  main()
{
     long long  n;
	cin>>n;
	long long sum=0;
	long long arr[n-1];
	for(long long i=0;i<n-1;i++){
	    cin>>arr[i];
	}
	for(long long i=0;i<n-1;i++){
	    sum+=arr[i];
	}
	long long total=n*(n+1)/2;
	cout<<total-sum;
	
	return(0);
}
