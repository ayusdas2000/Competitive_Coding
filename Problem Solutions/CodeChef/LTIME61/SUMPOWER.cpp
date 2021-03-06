#include <bits/stdc++.h>

using namespace std;

/* Template file for Online Algorithmic Competitions */
/* Typedefs */
    /* Basic types */
    typedef long long           ll;
    typedef unsigned long long ull;
    /* STL containers */
    typedef vector <int>    vi;
    typedef vector <ll>     vll;
    typedef pair <int, int> pii;
    typedef pair <ll, ll>   pll;
    typedef vector < pii >  vpii;
    typedef vector < pll >  vpll;
    typedef vector <string> vs;
    typedef vector < vi >   vvi;
/* Macros */
    /* Loops */
    #define fl(i, a, b)     for(int i(a); i<(b); i++)
    #define rep(i, n)       fl(i, 0, n)
    #define rep1(i, n)      fl(i, 1, n)
    #define rfl(i, a, b)    for(int i(a);i>=(b);i--)
    /* Algorithmic functions */
    #define srt(v)          sort((v).begin(),(v).end())
    /* STL container methods */
    #define pb              push_back
    #define mp              make_pair
    /* String methods */
    #define slen(s)         s.length()
    /* Shorthand notations */
    #define F               first
    #define S               second
    #define MOD             1000000007
    #define MAX             100010
    #define re              return 
    #define sz(x)           ((int) (x).size())
    #define all(x)          ((x).begin(), (x).end())
    #define sqr(x)          ((x) * (x))
    #define fill(x, y)      memset(x, y, sizeof(x))
/* Templates */
template<class T> T abs(T x) { re x > 0 ? x : -x; }
	
int main(){
    
    #ifndef ONLINE_JUDGE
	freopen("/Users/sahilbansal/Desktop/input.txt","r",stdin);
	freopen("/Users/sahilbansal/Desktop/output.txt","w",stdout);
	#endif

	
    int T, N, K;

    cin >> T;

    string S;

    while (T --){

        cin >> N >> K;

        cin >> S;

        vector <bool> check_equal_at_i(N, 0);

        rep(i, N - 1){
            if(S[i] == S[i + 1]){
                check_equal_at_i[i] = 1 ; // i and i + 1 are same 
            }
        }

        int occ = 1, ans = 0;

        int index = 0;
        
        while(index < N - 1){
            if(!check_equal_at_i[index]){
                ans += occ;
            }
            index ++;
            if(occ <= K && index < N - K){
                occ ++;
            }
            if(index >= K){
                occ --;
            }
            if(occ == 0){
                occ = 1;
            }
            // cout << "occ: " << occ << "\n";
        }

        if(N == K){
            ans = 0;
        }
        cout << ans << "\n";
    }	


	return 0;
}