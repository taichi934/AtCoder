// Powerful Discout Tickets
// 優先度付きキュー
#include<bits/stdc++.h>
using namespace std;

int main() {
    int N, M; cin >> N >> M;
    priority_queue<int, vector<int>, less<int>> q;
    for(int i = 0; i < N; ++i) {
        int a; cin >> a;
        q.push(a);
    }
    for (int j = 0; j < M; ++j) {
        int a = q.top(); q.pop();
        q.push(a/2);
    }
    long long ans = 0;
    while(!q.empty()) {
        ans += q.top(); q.pop();
    }
    cout << ans << endl;
}