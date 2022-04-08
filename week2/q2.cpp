#include<iostream>
#include<map>
using namespace std;
void sumtok(int arr[],int n)
{
    map<int,int> m;
    for (int i=0;i<n;i++)
    {
        m[arr[i]]=i;
    }
    for (int i=0;i<n-1;i++)
    {
       for (int j=i+1;j<n;j++)
       {
            if (m.find(arr[i]+arr[j])!=m.end())
                cout<<i<<" "<<j<<" "<<m[arr[i]+arr[j]]<<endl;
       }
    }

}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for (int i=0;i<n;i++)
           cin>>arr[i];
        sumtok(arr,n);
    }

}