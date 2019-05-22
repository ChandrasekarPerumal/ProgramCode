using namespace std;
#include<iostream>
#include<vector>
int main()
{
    int a[5];
    vector<int> V;
    for(int i=0;i<5;i++)
    {
        std::cin>>a[i];
        V.push_back(a[i]);
    }
    std::cout<<"\n\toutput";
    for(vector<int>::iterator i=V.begin();i!=V.end();i++)
        std::cout<<*i<<"\n\t";
}
