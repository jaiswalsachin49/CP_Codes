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

a + b = n (mod 12)
b = n - a (mod 12)
n (mod 12) = a (mod 12)
0 - 0
1 - 1
2 - 2
3 - 3
4 - 4
5 - 5 
6 - 6
7 - 7
8 - 8
9 - 9
10 - 22
11 - 11

*/

void sachin() {
    ll n; cin >> n;
    if(n == 10){
        cout << -1 << nl;
        return;
    }
    ll pal[12] = {0,1,2,3,4,5,6,7,8,9,22,11};
    ll a = pal[n%12];
    ll b = n - a;
    cout << a << " " << b << nl;
}

int main() {
    fast_io;

    // setup_io("test");
    
    int t = 1;
    cin >> t;
    while (t--) sachin();
    return 0;
}