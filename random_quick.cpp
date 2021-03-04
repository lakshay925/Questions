#include <iostream>
using namespace std;
void randomize(int a[],int l,int h){
    int n=h-l+1;
    int temp=rand()%n;
    swap(a[temp+l],a[h]);
}
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
void RQsort(int a[], int l,int h)
{
    if(h>l)
    {
        randomize(a,l,h);
        int p=partition(a,l,h);
        RQsort(a,l,p-1);
        RQsort(a,p+1,h);
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
    RQsort(a,0,n-1);
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
    return 0;
}
