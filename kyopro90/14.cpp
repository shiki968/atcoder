// ---------------- 標準ライブラリ ------------------- //
#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
// ----------------- よく使う ------------------------ */
#define rep(i,n) for(int i = 0; i < (n); ++i)
#define rrep(i,n) for(int i = 1; i <= (n); ++i)
#define drep(i,n) for(int i = (n)-1; i >= 0; --i)
#define srep(i,s,t) for (int i = s; i < t; ++i)
#define reps(c,s) for (auto c : s)
#define rng(a) a.begin(),a.end()
#define rrng(a) a.rbegin(),a.rend()  // 右から読む.reverse
#define all(x) (x).begin(),(x).end()
#define sortu(x) sort((x).begin(),(x).end())
#define sortd(x) sort((x).begin(),(x).end(), greater<int>())
#define pb push_back
#define eb emplace_back
#define sz(x) (int)(x).size()
using ll = long long int;
using vi = vector<int>;
using vl = vector<ll>;
using P = pair<int,int>;
#define fi first
#define se second
#define mp make_pair
#define mset(m,v) memset(m,v,sizeof(m))
using Graph = vector<vector<int>>;
#define v(T) vector<T>
template<typename T>istream& operator>>(istream&i,v(T)&v){rep(j,sz(v))i>>v[j];return i;}  // cin>>v 配列に代入
template<typename T>ostream& operator<<(ostream&o,const v(T)&v){if(sz(v))o<<join(v);return o;}  // cout<<v 配列を出力
template<typename T1,typename T2>istream& operator>>(istream&i,pair<T1,T2>&v){return i>>v.fi>>v.se;}
template<typename T1,typename T2>ostream& operator<<(ostream&o,const pair<T1,T2>&v){return o<<v.fi<<","<<v.se;}  // ,に注意
template<typename T>bool mins(T& x,const T&y){if(x>y){x=y;return true;}else return false;}
template<typename T>bool maxs(T& x,const T&y){if(x<y){x=y;return true;}else return false;}
template<typename T>ll suma(const v(T)&a){ll res(0);for(auto&&x:a)res+=x;return res;}
//----------------- 定数 ---------------------*/
const ll LINF = 9223372036854775807LL;
const int INF = 2147483647;
const int MOD1 = 1e9+7;
const int MOD9 = 998244353;
const int Max_T = 200005;
//----------------- 出力 ---------------------*/
#define shousuu cout << fixed << setprecision(15);
#define hr cout << "================================" << endl;
#define dame0 { puts("0"); return 0;}  // ; 含む
#define dame1 { puts("-1"); return 0;}
#define damen { puts("No"); return 0;}
#define yosi { puts("Yes"); return 0;}
#define yn {puts("Yes");}else{puts("No");}
#define outa cout << ans << endl;
#define out(x) cout << x << endl;
#define r0 {return 0;}
//--------------- 忘れがち -------------------
#define ul(x) x^=32  // 大文字小文字を逆にする
#define dup(x,y) ((x+y-1)/y)  // 切り上げ
/*--------------- 二分探索 -------------------*/
#define posi(x,v) *((lower_bound(x.begin(),x.end(),v)))
#define posl(x,v) (lower_bound(x.begin(),x.end(),v)-x.begin())  // v未満の個数 (keyを前に挿入(iterはkeyより大))
#define posl2(x,v) (x.end()-lower_bound(x.begin(),x.end(),v))   // v以上の個数
#define posu(x,v) (upper_bound(x.begin(),x.end(),v)-x.begin())  // v以下の個数 (keyを後ろに挿入)
#define posu2(x,v) (x.end()-upper_bound(x.begin(),x.end(),v))   // vより大きい個数
#define bs(x,v) (binary_search(x.begin(),x.end(),v))  // vがあるか
//-------------------Tips-----------------------//
//mins(ans,now);  ansに最小値が入る
//if(max(ans,now)) ansが小さければ更新して実行
//ll sum = suma(a);
//int a[33][4];
//vi a{1,2,3};
// vvi dp(n+1, vi(3));  n+1行、3列
bool flg = false;
// flg = true;

/*
全員別の学校。
不便さ（家から学校の距離）を最小にする。
わからないときは図を書く
*/

int main(){
    int n; cin>>n;
    vector<int> a(n); rep(i, n) cin >> a[i];
    vector<int> b(n); rep(i, n) cin >> b[i];
    
    sortu(a); sortu(b);
    ll ans = 0;
    rep(i,n){
        ans += abs(a[i]-b[i]);
    }
    outa
}

 /*
g++ 14.cpp -std=c++17 -I .
./a.out

cd "/mnt/c/Users/kmhss/OneDrive/programming/AtCoder/atcoder/kyopro90"
cd "/mnt/c/Users/kmhss/OneDrive/programming/AtCoder/abc"
*/
