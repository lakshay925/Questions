#include <iostream>
using namespace std;
void selsort(int a[], int n)
{
    int min,index;
    for (int i = 0; i < n-1; i++)
    {
        min=a[i],index=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<min)
            {
                min=a[j];
                index=j;
            }
        }
        if(index!=i) swap(a[i],index);
    }
}
int main()
{
    /* code */
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    selsort(a, n);
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
    return 0;
}
