#include<bits/stdc++.h>
using namespace std;


void solve()
{
    int n,maxi=0,count=0;
    long long sum=0;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        maxi = max(maxi,x);
        sum += x;

        if(sum == 2*maxi)
            count++;
    }
    cout<<count<<"\n";
}

int main() 
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int tt; cin >> tt; 
  while(tt--){solve();}
}