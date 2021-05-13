#include <bits/stdc++.h>
#define            ll           long long int
#define            pb            push_back
#define            mp            make_pair
#define            ff            first
#define            ss            second
#define            set1(x)       __builtin_popcount(x)//counts the number of set bits in an integer
#define            gcd(a,b)      __gcd(a,b)
#define            inf           1e18
#define            fastio        ios_base::sync_with_stdio(false); cin.tie(NULL);
#define            pl            pair<ll,ll>
#define            all(v)        (v).begin(),(v).end()
#define            fi(a,n)       for(ll i=a;i<n;i++)
#define            fj(a,n)       for(ll j=a;j<n;j++)
#define            fk(a,n)        for(ll k=a;k<n;k++)
#define            vl            vector<ll>
using namespace std;
const ll mod= 1000000007;



void solve()
{
  ll n;
  cin>>n;
  ll h1[n];
  ll h2[n];
  for(ll i=0;i<n;i++)
  {
    cin>>h1[i];
  }
  for (ll i = 0; i < n; ++i)
  {
    cin>>h2[i];
  }

  ll lr1=h1[0],lr2=h2[0];
   for(ll i=1;i<n;i++)
   {
      ll cr1=max(lr2+h1[i],lr1);
      ll cr2=max(lr1+h2[i],lr2);
      lr1=cr1;
      lr2=cr2;
   }
   cout<<max(lr1,lr2)<<"\n";
cout<<"hello\n";


}

int main()
{
    
 

 	solve();

 
  
  
  return 0;
  
    
}


       
  
