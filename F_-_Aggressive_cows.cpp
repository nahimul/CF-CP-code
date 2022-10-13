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
template<class T> void printp(T& a) { for(auto x:a) cout<<x.ff<<" "<<x.ss<<endl;}
int      dx[]={-1,0,0,1},dy[]={0,-1,1,0};

const         lli MOD= 1e9+7;
const double  PI = 3.141592653589793238460;

bool ispossible(vector<lli>&v,lli m,lli n,lli c )
{
    c--;
    for(lli i=0;i<n , c;)
    {
      lli x=lower_bound(all(v),v[i]+m)-v.begin(); 
     // cout<<x<<" "<<v[i]+m<<endl;
      if(x>=n) return false;
      i=x; 
      c--;
    }
    return true;
}

void solve()
{ 
  lli n,c;
  cin>>n>>c;
  vector<lli>v(n);
  f0(i,n) cin>>v[i];
  sort(all(v));
   lli low=0,high=v.back(),mid;
   while(low<high-1)
   {
    mid=(low+high)/2;
    if(ispossible(v,mid,n,c)) low=mid;
    else high=mid-1;
    //cout<<high<<" m " <<low<<endl;
   }
  
   lli ans=0;
   if(ispossible(v,high,n,c)) ans=high;
   else ans=low;
   cout<<ans<<endl;
 // cout<<high<<endl;
}
int main()
{ 
   FastIO
  int t; cin>>t; while(t--) solve();
  // solve();   
   return 0;
}