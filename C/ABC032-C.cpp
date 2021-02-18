// Inchworm
#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int N, K; cin >> N >> K;
    vector<int> a(N);
    for (auto &elm : a) cin >> elm;

    // 必要？
    /* 0 があったら n をリターン */
    for (int i = 0; i < n; ++i) {
        if (a[i] == 0) {
            cout << n << endl;
            return 0;
        }
    }

    int right = 0;
    ll times = 1;
    int length = 0;
    for (int left = 0; left < N; ++left) {
        while(right < N && times * a[right] <= K) {
            times *= a[right++];
        }
        length = max(length, right - left);

        if (right == left) ++right;
        else times /= a[left];
    }
    cout << length << endl;
}