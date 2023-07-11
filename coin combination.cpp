// author : rahul

#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int mod = 1e9 + 7;

int fun(int n, int start, int target, int a[], vector<int> &dp)
{
  if (start == target)
    return 1;
  if (start > target)
    return 0;
  if(dp[start] != -1) return dp[start];
  
 
  int count = 0;

  for (int i = 0; i < n; i++)
  {
     count += (fun(n, start + a[i], target, a, dp)%mod);
     count=count%mod;
  }
  return dp[start]=count%mod;
}

void solve()
{
  int n, sum;
  cin >> n >> sum;
  int a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  vector<int> dp(sum + 1, -1);
  int x = fun(n, 0, sum, a, dp);
    
    cout << x << endl;
  
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  solve();

  return 0;
}
