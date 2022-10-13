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
   lli n;
   cin>>n;
   lli a[n],b[n],suma=0,sumb=0;
   f0(i,n) {cin>>a[i]; suma+=a[i]; }
   f0(i,n){ cin>>b[i]; sumb+=b[i];}

   if(suma!=sumb) cout<<-1<<en;
   else {
    lli res=0;
    f0(i,n){
        res+=abs(a[i]-b[i]);
    }
    cout<<res/2<<en;
   }

}
int main()
{ 
   FastIO
  int t; cin>>t; while(t--) solve();
  // solve();   
   return 0;
}