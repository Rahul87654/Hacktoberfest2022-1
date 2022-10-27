//program of linear search
#include <iostream>
using namespace std;
int main()
{
    int n,i,s,arr[50];
    cout<<"Enter number of elements in array:";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Enter "<<i+1<<" element:";
        cin>>arr[i];
    }
    cout<<"Elements are :"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<"Enter the element you want to search:";
    cin>>s;
    for(i=0;i<n;i++)
    {
      if(arr[i]==s)
      {cout<<"Element found at index: "<<i<<endl;
          break;
      }
    }
    if(i==n)
    {
        cout<<"ELEMENT NOT FOUND";
    }
    return 0;
}
