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
 
    int cnt1 = n;
    int cnt3 = n / 3;
    int cnt5 = n / 5;
    int cnt15 = n / 15;
 
    cout << cnt3 - cnt15 << ' ';
    cout << cnt5 - cnt15 << ' ';
    cout << cnt15 << '\n';
 
    return 0;
}
