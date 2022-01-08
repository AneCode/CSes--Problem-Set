#include<bits/stdc++.h>
# define int  long long 
using namespace std;

void solve()
{
  int n;
  cin>>n;
  
  while(n!=1){
       cout<<n<<" "; 
      if(n%2==1)
       n=n*3+1;
       else 
       n=n/2;
  }
  cout<<"1";

   
}
int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
// 	int t;
// 	cin>>t;
// 	while(t--){
     solve();
// 	}
	return 0;
}