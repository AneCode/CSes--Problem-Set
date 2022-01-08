// A C/C++ Program to generate OTP (One Time Password)

#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin>>s;
    int count=0,maxm=0,i=0;
    char x='0';
    while(s[i]){
        if(x=='0')
          {
              count++;
              maxm++;
              x=s[i];
          }
         else if(x==s[i]){
             count++;
             maxm=max(count,maxm);
         }
         else{
             x=s[i];
             count=1;
         }
        i++;
    } 
    cout<<maxm;
}

int main()
{
	
	
	 solve();
	
	return(0);
}
