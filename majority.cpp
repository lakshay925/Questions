#include <iostream>
#include<unordered_map>
using namespace std;
int main()
{
    //code
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        if(mp[a[i]]!=0) 
        mp.insert({a[i],0});
    }
    for(int i=0;i<n;i++){
        mp[a[i]]++;
    }
    int flag=1;
    for(auto i=mp.begin();i!=mp.end();i++){
        if(i->second > n/2) 
        {
            cout<<i->first;
            flag=0;
        }
    }
    if(flag) cout<<"No majoroty Element";
    cout<<endl;
}
