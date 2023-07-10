// author : rahul

#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int mod=1e9+7;


int fun(int n,vector<int> &dp){
     int count=0;
     if(n==0) return 1;
     if(dp[n] != -1) return dp[n];
  

      for(int i=1;i<=6;i++){
         if(n-i>=0){
          
          count+=fun(n-i,dp);
          count=count%mod;
         }
      }
     
     return  dp[n]=(count%mod) ;
      
}

void solve()
{
     int n;cin>>n;
      vector<int> dp(n+1,-1);
    int x=  fun(n,dp);
   
     cout<<x<<endl;

}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  
    solve();
  

  return 0;
}
