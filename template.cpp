#include<bits/stdc++.h>
#include<string.h>
using namespace std;

void hello(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 
}

void fastread(){
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
}

#define f first
#define sec second
#define sp " "
#define MOD 1000000007
#define PI 3.1415926535897932384626433832795
#define ll long long
#define endl "\n"
#define testcase  int t;cin>>t;while(t--)
#define testcases  int t=1;while(t--)

//STL
#define pb push_back
#define eb emplace_back
#define all(v) v.begin(),v.end()
#define asc(v) sort(all(v))
#define dsc(v) asc(v),reverse(all(v))

//types
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define mii map<int, int>
#define si set<int>
#define sc set<char>

//loops and others
#define loop(a,b) for(int i=a;i<b;i++)
#define rloop(a,b) for(int i=a;i>b;i--)
ll min(ll a,int b) { if (a<b) return a; return b; }
ll min(int a,ll b) { if (a<b) return a; return b; }
ll max(ll a,int b) { if (a>b) return a; return b; }
ll max(int a,ll b) { if (a>b) return a; return b; }
ll gcd(ll a,ll b) { if (b==0) return a; return gcd(b, a%b); }
ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }
#define dp_x(x) cout<<x<<endl

void solve() {
   // write code
}

int main(){
   fastread();
   hello();

  testcases{
   solve();
  }
return 0;
 }

