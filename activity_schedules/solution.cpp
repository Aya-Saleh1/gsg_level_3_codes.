       #include <bits/stdc++.h>
        using namespace std ;
        #define int long long
        #define ll long long
        #define FAST ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
        const int LARGE = 1e9   ;
const int  MOD = 1e9 + 7 ;
    /*---------------------------------------------------------------------------------------------------------------------------*/

    int bipow(ll a , ll b ){
            ll res = 1 ;
            while(b){
                if(b  &  1 ){
                 res = ( (__int128)res * a ) % MOD;  ;


                }
                a = ( (__int128)a * a ) % MOD;
                b = (b >> 1 );
            }
            return res ;
        }

int n , m ;
vector<string> activites = {"Swimming", "Running", "Football"} ;
int cnt = 0 ;
void rec(int idx , vector<string> curr) {
    if (idx == n ) {
        for (auto i : curr) {
            cout << i << " " ;
        }
        cout << '\n';
        cnt++;
        return ;

    }
    for (int i = 0 ; i < 3 ; i++) {
        if (curr.size() == 0 || curr.back() != activites[i]){
            curr.push_back(activites[i]);
        rec(idx + 1, curr);
        curr.pop_back();
    }
    }
}
       void solve() {
    cin >>n ;
 rec(0 , {});
    cout << "COUNT : " << cnt << '\n' ;

}




        int32_t main()  {
           FAST
        #ifndef ONLINE_JUDGE
            freopen("saleh.txt", "r", stdin);
            freopen("out.txt", "w", stdout);
            #endif
    // freopen("cowtip.in", "r", stdin);
    // freopen("cowtip.out", "w", stdout);
    // sieve() ;
    // sieve2();
            int t = 1 ;
            // cin >> t ;
            while (t--  )   {
             solve();
            }
            return 0;
        }
