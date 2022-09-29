#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n,maxno;
    cin>>n;
     int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    maxno=INT16_MIN;
    for (int i = 0; i < n; i++)
    {
        maxno=max(arr[i],maxno);
       cout<<maxno<<" ";
    }
  return 0;  
}