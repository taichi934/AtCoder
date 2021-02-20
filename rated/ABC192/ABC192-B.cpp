#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  string S;
  cin >> S;
  for (int i = 0; i < S.size(); ++i) {
    if (i % 2 == 0) {
      if (isupper(S[i])) {
        cout << "No" << endl;
        return 0;
      }
    } else {
      if (islower(S[i])) {
        cout << "No" << endl;
        return 0;
      }
    }
  }
  cout << "Yes" << endl;
}