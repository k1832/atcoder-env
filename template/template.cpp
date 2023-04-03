#include <bits/stdc++.h>
using namespace std;

// #define int long long
using ll = long long;
using P = pair<int, int>;
template<class T> using min_heap = priority_queue<T, std::vector<T>, std::greater<T>>;
template<class T> using max_heap = priority_queue<T, std::vector<T>>;

// Use this struct to use pair<T1, T2> as key of hash [map|set]
// Example: unordered_map<std::pair<int, int>, int, pair_hash> ump;
struct pair_hash {
    template <class T1, class T2>
    std::size_t operator() (const std::pair<T1, T2>& p) const {
        auto h1 = std::hash<T1>{}(p.first);
        auto h2 = std::hash<T2>{}(p.second);

        // Combine the two hashes (example taken from boost::hash_combine)
        // Another ref: https://github.com/HowardHinnant/hash_append/issues/7
        if (sizeof(T1) >= 8)
            return h1 ^ (h2 + 0x9e3779b97f4a7c15ULL + (h1 << 12) + (h1 >> 4));
        else
            return h1 ^ (h2 + 0x9e3779b9 + (h1 << 6) + (h1 >> 2));
    }
};

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

template<class T = int> T in() {T a; cin >> a; return a;}

/***** MAIN *****/
signed main() {

    cout << "\n";
    return 0;
}
/***** MAIN *****/
