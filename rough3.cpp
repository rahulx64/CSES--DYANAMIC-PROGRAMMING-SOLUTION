// author : rahul

#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int mod = 1e6 + 7;

int fun(int n, int start, int target, int a[], vector<int> &dp)
{
  if (start == target)
    return 0;
  if (start > target)
    return mod;
  if (dp[start] != -1)
    return dp[start];
  int mini = 1e8;

  for (int i = 0; i < n; i++)
  {

    mini = min(mini, 1 + fun(n, start + a[i], target, a, dp));
    dp[start] = mini;
  }
  return mini;
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
  if (x > 1000007)
  {
    cout << -1 << endl;
  }
  else
  {
    cout << x << endl;
  }
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  solve();

  return 0;
}
