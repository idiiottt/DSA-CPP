#include<bits/stdc++.h>
using namespace std;

pair<int,int> slargest_ssmallest(vector<int>arr,int n)
{
    int largest=arr[0],smallest=arr[0];
    int slargest=INT_MIN,ssmallest=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>largest)
        {
            slargest=largest;
            largest=arr[i];
        }
        else if(arr[i]<largest && arr[i]>slargest)
        slargest=arr[i];

        if(arr[i]<smallest)
        {
            ssmallest=smallest;
            smallest=arr[i];
        }
        else if(arr[i]>smallest && arr[i]<ssmallest)
        ssmallest=arr[i];
    }
    return{slargest,ssmallest};
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
    pair<int,int>result=slargest_ssmallest(arr,n);
    cout<<"Second largest="<<result.first<<endl;
    cout<<"Second smallest="<<result.second<<endl;

    return 0;
}