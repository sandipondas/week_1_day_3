#include<bits/stdc++.h>
#define nl '\n'
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
   int l=0,r=0,count=0;
   while(l<m)
   {
      while(v1[r]<v2[l] && r<n)
      {
        count++;
        r++;
      }
      cout<<count<<" ";
      l++;
   }

   return 0;
}