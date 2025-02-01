#include <bits/stdc++.h>
using namespace std;

// #define int long long
using ll = long long;
using P = pair<int, int>;
template<class T> using min_heap = priority_queue<T, std::vector<T>, std::greater<T>>;
template<class T> using max_heap = priority_queue<T, std::vector<T>>;

#define LOG(variable) cerr << #variable":\t" << (variable) << "\n"
#define LOGCON(i, container) for(size_t (i) = 0; (i) < (container).size(); ++(i)) cerr << (i) << ":\t" << (container)[(i)] << "\n"
#define REP(i, n) for (long long i = 0; i < (n); ++i)
#define REPS(i, r, n) for (long long i = (r); i < (n); ++i)
#define REPR(i, n) for(long long i = (n); i >= 0; --i) // from n to 0
#define REPRS(i, n, r) for(long long i = (n); i >= (r); --i) // from n to r
#define REPOBJ(itr, obj) for(auto itr = (obj).begin(); itr != (obj).end() ; ++itr)
#define REPROBJ(itr, obj) for(auto itr = (obj).rbegin(), e = (obj).rend(); itr != e; ++itr)
#define COUTB(x) cout << (x) << "\n"
#define COUTS(x) cout << (x) << " "
#define PB push_back
#define SORT(obj) sort((obj).begin(), (obj).end())
#define SORTR(obj) sort((obj).begin(), (obj).end(), greater<>())
#define ALL(obj) (obj).begin(), (obj).end()
#define MOD 1000000007
#define PI (acos(-1))
constexpr int DX[] = {1, 0, -1, 0};
constexpr int DY[] = {0, 1, 0, -1};

template<class T = int> T in() {T a; cin >> a; return a;}
template <typename T>
bool chmax(T &a, const T& b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}
template <typename T>
bool chmin(T &a, const T& b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}

/***** MAIN *****/
signed main() {

    cout << "\n";
    return 0;
}
/***** MAIN *****/
