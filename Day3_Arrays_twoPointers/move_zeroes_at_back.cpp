#include<bits/stdc++.h>
using namespace std;

void zeroes_at_back(vector <int> &arr)
{
    int i,j=-1;
    int n=arr.size();
    for(i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            j=i;
            break;
        }
    }

    if(j==-1)
    return;

    for(i=j+1;i<n;i++)
    {
        if(arr[i]!=0)
        {
            int temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
            j++;
        }
    }
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

    zeroes_at_back(arr);
    cout<<"Array after moving zeroes at the back="<<endl;
    for(int i=0;i<n;i++)
    cout<<" "<<arr[i];

}