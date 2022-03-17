#include <bits/stdc++.h>
 
using namespace std;
 
#define all(v) (v).begin(), (v).end()
#define sz(v) (int)(v).size()
 
typedef long long ll;
typedef pair<int, int> pii;
 
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
 
template<typename T>
std::ostream& operator << (std::ostream& os, const vector<T>& a) {
    for (const T& x : a) {
        os << x << ' ';
    }
    return os;
}
 
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
 
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            cout << '9';
        } else {
            cout << '8';
        }
    }
    cout << '\n';
 
    return 0;
}
