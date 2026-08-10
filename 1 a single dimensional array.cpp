#include <iostream>
using namespace std;
int main()
{
    int a[10],n;
    cout<<"enter the number of elements:";
    cin>>n;
    cout<<"enter the array elements:\n";
    for(int i=0;i<n;i++)
{
    cin>>a[i];
}
cout<<"the array elements are:";
for(int i=0;i<n;i++)
{
    cout<<a[i]<<" ";
}

    return 0;
}
