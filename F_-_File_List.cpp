#include<bits/stdc++.h>
using namespace std;
#define FastIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define vi vector<int>
#define pb push_back
#define ff first 
#define ss second
#define pi pair<int,int>
#define mp map<int,int>
#define vpi vector<pi>
#define vii vector<vi>
#define lli long long int 
#define en endl
#define f0(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define all(x)  (x).begin(),(x).end()
#define rall(x)  (x).begin(),(x).end(),greater<int>()
#define yes cout<<"Yes"<<endl;
#define no cout<<"No"<<endl;
template<class T> void print(T& a) { for(auto x:a)cout<<x<<" "; cout<<"\n";}
int dx[]={-1,0,0,1},dy[]={0,-1,1,0};

const lli MOD= 1e9+7;
const double PI = 3.141592653589793238460;

void solve()
{ 
   string s;
   cin>>s;
   vi a;
   int n=s.size();
   f0(i,n) {
    if(s[i]=='.') a.pb(i);
   }
   int sz=a.size();
  // cout<<n<<en;
   //f0(i,sz) cout<<a[i]<<" ";
   if(sz==0){cout<<"NO"<<en; return;}
   if(a[0]==0 or a[0]>8) {cout<<"NO"<<en; return;}
   if((n-a[sz-1]-1)==0 or (n-a[sz-1]-1)>3)  {cout<<"NO"<<en; return;}
   for(int i=0;i<sz-1;i++)
   {
    if((a[i+1]-a[i])<2 or (a[i+1]-a[i])>11)  {cout<<"NO"<<en; return;}
   }

   cout<<"YES"<<en;
   int j=0;
      int start=0,ed=0;
   for(int i=0;i<sz-1;i++)
   {
       ed=a[i]+1;

      int x=a[i+1]-a[i];
      if(x>6) {
        x=3;
      }
      else x/=2;

      ed+=x;

      for(j=start;j<ed;j++)
       cout<<s[j];
      cout<<en;
      start=ed;
   }
   while(j<n)
   {
    cout<<s[j];
    j++;
   }
   cout<<en;
}
int main()
{ 
   FastIO
  //int t; cin>>t; while(t--) solve();
   solve();   
   return 0;
}