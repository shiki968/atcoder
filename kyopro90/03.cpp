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
const ll LINF = 1001002003004005006ll;
const int INF = 1001001;
const int MOD1 = 1e9+7;
const int MOD9 = 998244353;
const int Max_T = 200005;
//----------------- 出力 ---------------------*/
#define shousuu cout << fixed << setprecision(15);
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
#define bs(x,v) (binary_search(x.begin(),x.end(),v))
//-------------------Tips-----------------------//
//mins(ans,now);  ansに最小値が入る
//if(max(ans,now)) ansが小さければ更新して実行
//ll sum = suma(a);
//int a[33][4];
//vi a{1,2,3};
// vvi dp(n+1, vi(3));  n+1行、3列
bool flg = false;
// flg = true;

vector<int> d;
Graph g;
int n;
void dfs(int now, int dist){
    if(d[now]!=-1) return;
    d[now] = dist;
    for(auto next : g[now]){
        dfs(next,dist+1);
    }
    return;
}

int main(){
    cin>>n;
    g.resize(n);
    rep(i,n-1){
        int a, b; cin >> a >> b;
        --a; --b;
        g[a].pb(b);
        g[b].pb(a);
    }
    d.resize(n);
    //頂点1から各点までの最短距離
    rep(i,n) d[i] = -1;
    dfs(0,0);
    int mx = -1;
    int mx_i = -1;
    rep(i,n) if(maxs(mx,d[i])) mx_i = i;
    // out(mx_i)
    rep(i,n) d[i] = -1;
    dfs(mx_i,0);
    mx = -1;
    rep(i,n) maxs(mx,d[i]);
    out(mx+1)
}
 /*
g++ 03.cpp -std=c++17 -I .
./a.out

Ctrl+Shift+Bでコンパイル (problem.exe生成)(./problem.exe コマンドの後に入力するとプログラム走る)
ブレークポイント作る。
problem.inに入力を貼り付け
f5
上に表示されるツールバーでプログラムの流れを制御
*/
