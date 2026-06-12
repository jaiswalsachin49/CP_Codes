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
    ll c1,m1,c2,m2,c3,m3; cin >> c1 >> m1 >> c2 >> m2 >> c3 >> m3;
    vl buck = {m1,m2,m3};
    vl cap = {c1,c2,c3};
    ll baari = 1;
    ll pichhli = 0;
    f(i,0,100){
        ll rem = max((ll)0,(buck[baari]+buck[pichhli])-cap[baari]);
        if(rem){
            buck[baari] = cap[baari];
        }else{
            buck[baari] = buck[baari] + buck[pichhli];
        }
        buck[pichhli] = rem;
        pichhli = baari;
        baari++;
        if(baari == 3){
            baari = 0;
        }
    }
    for(auto i:buck){
        cout << i << nl;
    }

}

int main() {
    fast_io;

    setup_io("mixmilk");
    
    int t = 1;
    // cin >> t;
    while (t--) sachin();
    return 0;
}