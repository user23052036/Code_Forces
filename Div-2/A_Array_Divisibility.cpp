#include<bits/stdc++.h>
using namespace std;


void solve()
{
    int n;
    cin>>n;
    int arr[n];

    for(int k=n; k>=1; k--)
        arr[k-1]=k;

    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<"\n";
}

int main() 
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int tt; cin >> tt; 
  while(tt--){solve();}
  return 0;
}