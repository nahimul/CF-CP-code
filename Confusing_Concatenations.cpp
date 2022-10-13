#include<bits/stdc++.h>
using namespace std;
#define     FastIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define     pb       push_back
#define     MP       make_pair
#define     ff       first 
#define     ss       second
#define     lli      long long int 
#define     pi       pair<int,int>
#define     mp       map<int,int>
#define     vpi      vector<pi>
#define     vi       vector<int>
#define     vvi      vector<vi>
#define     vl       vector<lli>
#define     vvl      vector<vl> 
#define     f0(i,n)  for(int i=0;i<n;i++)
#define     f1(i,n)  for(int i=1;i<=n;i++)
#define     all(x)   (x).begin(),(x).end()
#define     rall(x)  (x).begin(),(x).end(),greater<int>()
#define     yes      cout<<"YES"<<endl;
#define     no       cout<<"NO"<<endl;
#define     ln       cout<<endl;
#define     isvalid(i,j,r,c)     ((i>=0 and i<r) and (j>=0 and j<c))
int         Ceil(int a,int b) {return (int)a/b+(1&&(a%b));}
template<class T> void print(T& a) { for(auto x:a)cout<<x<<" "; cout<<"\n";}
template<class T> void printp(T& a) { for(auto x:a) cout<<x.ff<<" "<<x.ss<<endl;}
int      dx[]={-1,0,0,1},dy[]={0,-1,1,0};

const         lli MOD= 1e9+7;
const double  PI = 3.141592653589793238460;

void solve()
{ 
  int n;
  cin>>n;
  vi c(n);
  f0(i,n) cin>>c[i];
   if(n==1){
    cout<<-1<<endl;
    return;
 }
  vi a,b;
  a.pb(c[0]);
 int i=1;
 while(c[0]>c[i]){ a.pb(c[i]);
 i++;
 }
 if(a.size()==n){
    cout<<-1<<endl;
    return;
 }
 while(i<n)
    {
        b.pb(c[i]);
        i++;
    }
  cout<<a.size()<<endl;
  print(a);
  cout<<b.size()<<endl;
  print(b);
}
int main()
{ 
   FastIO
  int t=1; cin>>t; 
  while(t--) solve();
   return 0;
}