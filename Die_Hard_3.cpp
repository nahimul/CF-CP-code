#include<bits/stdc++.h>
using namespace std;
void cool()
{
    int a,b,c;
    cin>>a>>b>>c;
    int d=__gcd(a,b);
    if(c>max(a,b) or c%d!=0 ) {
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--) cool();
}