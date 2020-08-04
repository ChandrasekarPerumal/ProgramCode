#include<iostream>
#include<bits/stdc++.h>

#include<stack>
#include<vector>
using namespace std;

void StockSpan(int *arr,int L)
{
    stack < pair<int,int> > s;
    vector<int> v;

    for(int i=0;i<L;i++)
    {
        if(s.size()==0)
            v.push_back(-1);
        else if(s.top().first>arr[i] && s.size()>0)
            v.push_back(s.top().second);
        else if(s.top().first<arr[i] && s.size()>0)
        {
            while(s.top().first<arr[i]&&s.size()>0)
            {
                s.pop();
            }
            if(s.size()==0)
                v.push_back(-1);
            else
                v.push_back(s.top().second);
        }
        s.push({arr[i],i});
    }
    for(int i=0;i<v.size();i++)
    {
        v[i]=i-v[i];
    }
    cout<<"O/P:\n";
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}




int main()
{
    int L;
    cout<<"length of the array\n";
    cin>>L;
    int arr[L];
    cout<<"Array Elements\n";
    for(int i=0;i<L;i++)
    {
        cin>>arr[i];
    }
    StockSpan(arr,L);

}
