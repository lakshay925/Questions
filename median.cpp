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
int  find_median(int a[], int l,int h,int k)
{
  if(l<h){
      randomize(a,l,h);
      int p=partition(a,l,h);
      if(p==k) return a[p];
      else if(p>k) return find_median(a,l,p-1,k);
      else return find_median(a,p+1,h,k);
  }
}
int main()
{
    //code 1 2 3 4 5  
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int median;
    if(n&1==1) median=find_median(a,0,n-1,n/2);
    else median=(find_median(a,0,n-1,n/2)+find_median(a,0,n-1,n/2-1))/2;
    cout<<median<<endl;
}
