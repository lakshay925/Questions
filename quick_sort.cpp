#include <iostream>
using namespace std;
int partition(int a[],int l,int h)
{
    int pivot=a[h],i=l-1,j=l;
    while(j<h)
    {
        if(a[j]<pivot)
        {
            i++;
            swap(a[i],a[j]);
        }
        j++;
    }
    swap(a[++i],a[h]);
    return i;
}
void Qsort(int a[], int l,int h)
{
    if(h>l)
    {
        int p=partition(a,l,h);
        Qsort(a,l,p-1);
        Qsort(a,p+1,h);
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
    Qsort(a,0,n);
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
    return 0;
}
