// Tim Cai

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

#define HEADER "\033[95m"
#define OKBLUE "\033[94m"
#define OKCYAN "\033[96m"
#define OKGREEN "\033[92m"
#define WARNING "\033[93m"
#define FAIL "\033[91m"
#define ENDC "\033[0m"
#define BOLD "\033[1m"
#define UNDERLINE "\033[4m"

#define ll long long
#define MOD 1000000007
#define INF LLONG_MAX
#define NINF LLONG_MIN
#define em emplace
#define eb emplace_back
#define f first
#define s second
#define fo(i, n) for(ll i = 0; i < n; ++i)
#define fos(i, k, n) for(ll i = k; i < n; ++i)
#define rfo(i, n) for(ll i = n; i >= 0; --i)
#define rfos(i, k, n) for(ll i = n; i >= k; --i)
#define debug(x) cout << BOLD << WARNING << #x << ": " << x << ENDC << '\n'
#define flag(x) cout << BOLD << OKBLUE << "flag " << x << ENDC << '\n'
#define pout(x) cout << BOLD << OKBLUE << x << ENDC << '\n'
#define sz(x) (ll) x.size()

// ReadIn ** REQUIRES C++ 17 ** (-std=c++17)
template<typename... T> void readin(T&... args) { ((cin >> args), ...); }

// Ordered Statistics Tree Declaration
typedef tree<
int,
null_type,
less_equal<int>,  // REMOVE IF WANT DUPLICATES
rb_tree_tag,
tree_order_statistics_node_update>
ordered_stat_set;

struct pair_hash {
    inline size_t operator()(const pair<int, int> & v) const {
        return v.f * 31 + v.s;
    }
};

ll lis(vector<int>& v) {
    vector<ll> d(sz(v) + 1, INT_MAX);
    for(auto& x : v) { *lower_bound(d.begin(), d.end(), x) = x; }
    return lower_bound(d.begin(), d.end(), INT_MAX) - d.begin();
}

vector<pair<int, int>> mv = { {1, 0}, {0, 1}, {-1, 0}, {0, -1} };

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    string x;
    readin(x);

    bool fl = false;
    fo(i, sz(x) - 1) {
        if(x[i] == 's' && x[i + 1] == 's') {
            cout << "hiss\n";
            fl = true;
            break;
        }
    }

    if(!fl) {
        cout << "no hiss\n";
    }

    return 0;
}