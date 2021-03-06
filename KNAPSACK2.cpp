//                               KiSmat
#include<bits/stdc++.h>
 
using namespace std;
 
#define night_rider ios::sync_with_stdio(false);cin.tie(NULL);
#define double long double
#define int long long int
#define en "\n"
#define fi first
#define se second
#define PB push_back
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
#define rep(i,x,y,k) for(int i=x ; i<y ; i+=k)
#define erep(i,x,y,k) for(int i=x ; i<y ; i+=k)
#define repr(i,x,y,k) for(int i=x ; i>y ; i-=k)
#define sz(x) (int)(x.size())
 
typedef vector<int> vi;
typedef vector<vector<int>> vii;
typedef pair<int,int> pi;
typedef vector<pair<int,int>> pii;
//-------------------------------------------------------------------------------------------------------------------------------------------------------------- 
 
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif
 
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(double t) {cerr << t;}
 
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(vector <vector<T>> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.fi); cerr << ","; _print(p.se); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " , ";} cerr << "]";}
template <class T> void _print(vector <vector<T>> v) {cerr<<"[ ";for(auto& row : v) { cerr<<" {";for(auto& col : row) {_print(col); cerr<<" , ";} cerr<<"}\n";} cerr<<" ]";}
 
//-------------------------------------------------------------------------------------------------------------------------------------------------------------- 
 
const int no=3e6+5,modulo=1e9+7,inf=1e18,N=2e3+9;
int ar[no],br[no],cr[no];
//LOWER_BOUND(n) - FIRST ELEMENT GREATER THAN EQUAL TO n
//UPPER_BOUND(n) - FIRST ELEMENT GREATER THAN n
 
//-------------------------------------------------------------------------------------------------------------------------------------------------------------- 

void solve () {
    int n=0,m=0,a=0,b=0,c=0,d=0,x=0,y=0,z=0,w=0,k=0; 
    cin>>n>>w;
    rep(i,0,n,1) cin>>br[i]>>ar[i] ;
    x=100000;
    vii dp(n+1,vi(x+1,inf)) ;
    rep(i,0,n+1,1) dp[i][0]=0;
    dp[1][ar[0]]=br[0] ;
    rep(i,2,n+1,1) {
        rep(j,1,x+1,1) {
            if(j>=ar[i-1]) {
                dp[i][j]=min(dp[i-1][j-ar[i-1]]+br[i-1],dp[i-1][j]) ;
            }
            else {
                dp[i][j]=dp[i-1][j] ;
            }
        }
    }
    repr(i,x,-1,1) {
        if(dp[n][i]<=w) {
            a=i;
            break;
        }
    }
    cout<<a;
}
 
inline void runn() {
    #ifndef ONLINE_JUDGE                  
    freopen("input.txt","r",stdin);   
    freopen("output.txt","w",stdout);   
    freopen("error.txt","w",stderr);   
    #endif                               
}                                          
                                         
signed main() {                          
    night_rider
    runn(); 
    int t=1;
    cout<<fixed<<setprecision(15);
   // cin>>t;
    rep(i,1,t+1,1) {
      //  cout << "Case #" << i << ": ";
        solve();
    }
}
//Shinchan Loves Coding :))