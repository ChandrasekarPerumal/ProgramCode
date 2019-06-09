#include<iostream>
using namespace std;
int main()
{
    int arr_rows,arr_columns;
    cout<<"Rows and columns\n";
    cin>>arr_rows>>arr_columns;
   // int arr[arr_rows][arr_columns];
    cout<<"Data array\n";
   /* for(int i=0;i<arr_rows;i++)
    {
        for(int j=0;j<arr_columns;j++)
            cin>>arr[i][j];
    }
*/
   //int arr[6][6]={{1,1,1,0,0,0},{0,1,0,0,0,0},{1,1,1,0,0,0},{0,0,2,4,4,0},{0,0,0,2,0,0},{0,0,1,2,4,0}};
 int arr[6][6]= {{-1,-1,0,-9,-2,-2},{-2,-1,-6,-8,-2,-5},{-1,-1,-1,-2,-3,-4},{-1,-9,-2,-4,-4,-5},{-7,-3,-3,-2,-9,-9},{-1,-3,-1,-2,-4,-5}};
    for(int i=0;i<arr_rows;i++)
    {
        cout<<"\n\t";
        for(int j=0;j<arr_columns;j++)
            cout<<arr[i][j]<<" ";
    }
    int max1=0,tot=0;
    for(int i=0;i<arr_rows-2;i++)
    {
        for(int j=0;j<arr_columns-2;j++)
        {
            tot=arr[i][j]+arr[i][j+1]+arr[i][j+2];
            tot+=arr[i+1][j+1];
            tot+=arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
            cout<<"\n Total:=  "<<tot;
            if(tot>max1)
            {
                max1=tot;
            }
            tot=0;
        }
    }
    cout<<"\n\t"<<max1;



/*

    for(int i=0;i<arr_rows-2;i++)
    {
        cout<<"\n";
        for(int j=0;j<arr_columns-2;j++)
        {
            cout<<arr[i][j]<<" "<<arr[i][j+1]<<" "<<arr[i][j+2];
            cout<<"\n"<<arr[i+1][j+1]<<"\n";
            cout<<arr[i+2][j]<<" "<<arr[i+2][j+1]<<" "<<arr[i+2][j+2]<<" ";
            cout<<"\n";

        }
}*/
}
