// DP
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = 1LL << 60;

void chmin(ll &a, ll b) {
  if (a > b) a = b;
}

int main() {
  int N;
  cin >> N;
  vector<int> a(N);
  for (auto &elm : a) cin >> elm;
  vector<ll> dp(N);
  for (auto &elm : dp) elm = INF;
  dp[0] = 0;

  for (int i = 0; i < N - 1; ++i) {
    chmin(dp[i + 1], dp[i] + abs(a[i] - a[i + 1]));
    if (i < N - 2) chmin(dp[i + 2], dp[i] + abs(a[i] - a[i + 2]));
  }
  cout << dp[N - 1] << endl;
}