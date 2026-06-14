#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define ull unsigned long long
#define ld long double
#define f(i,k,n) for(int i = k; i < n; i++)
#define fr(i,n,k) for(int i = n; i >= k; i--)
#define vi vector<int>
#define vl vector<long long>
#define vs vector<string>
#define vb vector<bool>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define mp make_pair
#define take(arr) for(auto &x: arr) cin >> x;
#define print(arr) for(auto x:arr) cout << x << " ";
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define ff first
#define ss second
#define sz(x) (int)(x).size()
#define nl "\n"

const ll MOD = 1e9 + 7;
const ll INF = 1e18;
const int MAXN = 2e5 + 5;
const double EPS = 1e-9;

void setup_io(string filename = "") {
    if (!filename.empty()) {
        freopen((filename + ".in").c_str(), "r", stdin);
        freopen((filename + ".out").c_str(), "w", stdout);
    }
}
/*

*/

void sachin() {
    ll x,y; cin >> x >> y;
    ll ans = 0;
    ll dir = 1;
    ll dis = 1;
    ll curr = x;
    ll prev = x;
    while(true){
        if((prev <= y && curr >= y) || (prev >= y && curr <= y)){
            ans -= abs(y - curr);
            break;
        }
        prev = curr;
        if(dir == 1){
            curr = x + dis;
            dir = -1;
        }else{
            curr = x - dis;
            dir = 1; 
        }
        ans += abs(curr - prev);
        dis *= 2;
    }
    cout << ans << nl;
}

int main() {
    fast_io;
    
    setup_io("lostcow");
    
    int t = 1;
    // cin >> t;
    while (t--) sachin();
    return 0;
}