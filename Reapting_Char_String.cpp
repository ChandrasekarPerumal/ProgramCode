using namespace std;
#include<iostream>
#include<string>
#define No_of_char 256
int main()
{
    string s;
    cout<<"\n\tEnter the string";
    cin>>s;
    int ar[No_of_char]={0};
    for(int i=0;i<s.size();i++)
    {
        ar[(int)s[i]]++;
    }
int max_repeat=0;
char C;
for(int i=0;i<s.size();i++)
{
   if(ar[s[i]]>max_repeat)
      {
        max_repeat=ar[s[i]];
        C=s[i];
      }
}
cout<<"Most repeated char is"<<C<<"\n\tCount:"<<max_repeat;
}
