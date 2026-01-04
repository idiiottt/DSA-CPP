#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of elements in the array="<<endl;
    cin>>n;
    vector<int> v(n);
    set<int>s;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        s.insert(v[i]);                // set<int> s(v.begin(), v.end()); // insert all elements from vector
    }

    int p=s.size();
    for(auto x:s)
    {
        cout<<x<<" ";
    }

    

}