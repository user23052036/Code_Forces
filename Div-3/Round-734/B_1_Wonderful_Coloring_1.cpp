#include<bits/stdc++.h>
using namespace std;


void solve()
{
    unordered_map<char,int>ump;
    int cnt=0,small_total=0,big_count=0;
    string str;
    cin>>str;

    for(auto it: str)
        ump[it]++;
    for(auto it: ump)
    {
        if(it.second < 3)
            small_total += it.second;
        else
            big_count++;
    }
    cnt += big_count + small_total/2;
    cout<<cnt<<"\n";
    ump.clear();
}

int main() 
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int tt; cin >> tt; 
  while(tt--){solve();}
  return 0;
}