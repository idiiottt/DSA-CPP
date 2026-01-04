#include<bits/stdc++.h>
using namespace std;
void left_rotate_array_by_one(vector<int>&arr)
{
    int n=arr.size();
    if(n==0 || n==1)return;
    int i,temp=arr[0];
    for(i=0;i<n-1;i++)
    arr[i]=arr[i+1];
    arr[n-1]=temp;
}

int main()
{
    int n;
    cout<<"Enter no of elements="<<endl;
    cin>>n;
    
    vector<int>arr(n);

    cout<<"Enter elements="<<endl;
    for(int i=0;i<n;i++)
    cin>>arr[i];

    left_rotate_array_by_one(arr);
    cout<<"Array after rotating it to the left by one="<<endl;
    for(int i=0;i<n;i++)
    cout<<" "<<arr[i];

}