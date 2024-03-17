#include<bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);

   int n,m;
   cin>>n>>m;
   vector<int> v1(n),v2(m);
   for(int i=0; i<n; i++)
   {
      cin>>v1[i];
   }
   for(int i=0; i<m; i++)
   {
      cin>>v2[i];
   }
   ll l=0,r=0;
   ll ans=0;
   while(l<m && r<n)
   {
      ll count1=0,count2=0;
      int x=v2[l];
      while(v2[l]==x && l<m)
      {
        count1++;
        l++;
      }
      while(v1[r]<x && r<n)
      {
        r++;
      }
      while(v1[r]==x && r<n)
      {
        count2++;
        r++;
      }
     ans+=count1*count2;
   }
   cout<<ans<<nl;

   return 0;
}