#include<bits/stdc++.h>
using namespace std;
#define     FastIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define     vi       vector<int>
#define     pb       push_back
#define     ff       first 
#define     ss       second
#define     pi       pair<int,int>
#define     mp       map<int,int>
#define     vpi      vector<pi>
#define     vii      vector<vi>
#define     lli      long long int 
#define     f0(i,n)  for(int i=0;i<n;i++)
#define     f1(i,n)  for(int i=1;i<=n;i++)
#define     all(x)   (x).begin(),(x).end()
#define     rall(x)  (x).begin(),(x).end(),greater<int>()
#define     yes      cout<<"YES"<<endl;
#define     no       cout<<"NO"<<endl;
#define     ln       cout<<endl;
#define     isvalid(i,j,r,c)     ((i>=0 and i<r) and (j>=0 and j<c))
int         Ceil(int a,int b) {return (int)a/b+((a%b)&&(a%b));}
template<class T> void print(T& a) { for(auto x:a)cout<<x<<" "; cout<<"\n";}
int      dx[]={-1,0,0,1},dy[]={0,-1,1,0};

const         lli MOD= 1e9+7;
const double  PI = 3.141592653589793238460;

void solve()
{ 
  string s; cin>>s;
   int n =s.size();
  vector<pair<int,int>>p;
  for(int i=1;i<n-1;i++)
  {
    int x=s[i]-'0';
   p.pb(make_pair(x,i+1));
  }

  vector<int>v;

 int star=s[0]-'0';
 int en=s[n-1]-'0';
 if(star<=en) sort(all(p));
 else sort(p.rbegin(),p.rend());

 v.pb(1);
 int b1=max(star,en);
 int b2=min(star,en);
 for(int i=0;i<n-2;i++)
 {
    int x=p[i].ff;
    if(x>=b2 and x<=b1) v.pb(p[i].ss);
 }
 v.pb(n);
 cout<<abs(b1-b2)<<" "<<v.size()<<endl;
 for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
 ln
}
int main()
{ 
   FastIO
  int t; cin>>t; while(t--) solve();
  // solve();   
   return 0;
}