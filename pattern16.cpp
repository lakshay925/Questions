#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < (n+1)/2; i++)
    {
        for(int j=1;j<n-2*i;j++)
            cout<<" ";
        for (int j = 1; j <= i+1; j++)
            cout <<j<<" ";
        for(int j=i;j>0;j--) cout<<j<<" ";
        cout << endl;
    }
   n=(n+1)/2;
    for (int i = 0; i < n; i++)
    {
        for(int j=0;j<=2*i+1;j++)
            cout<<" ";
        for(int j=0;j<n-i-1;j++) cout<<j+1<<" ";
        for(int j=n-2-i;j>=1;j--) cout<<j<<" ";
        cout<<endl;
    }
}