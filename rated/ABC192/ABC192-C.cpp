#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll g1(ll x) {
  string s = to_string(x);
  sort(s.begin(), s.end(), greater<char>());
  return stoll(s);
}

ll g2(ll x) {
  string s = to_string(x);
  sort(s.begin(), s.end());
  return stoll(s);
}

ll f(ll x) { return g1(x) - g2(x); }

int main() {
  ll N, K;
  cin >> N >> K;

  ll a = N;
  for (int i = 0; i < K; ++i) {
    ll next_a = f(a);
    a = next_a;
  }
  cout << a << endl;
}