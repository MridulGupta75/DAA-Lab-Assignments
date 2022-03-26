#include<iostream>
#include<map>
using namespace std;
int diffrenceequaltok(int arr[],int n,int key)
{
    map<int,int> m;
    int count=0;
    for (int i=0;i<n;i++)
    {
        m[arr[i]]=i;
    }
    for (int i=0;i<n;i++)
    {
        if (m.find(arr[i]+key)!=m.end())
           count++;
    }

    return count; 

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
        int key;
        cin>>key;

        int count=diffrenceequaltok(arr,n,key);
        cout<<count<<endl;
    }

}