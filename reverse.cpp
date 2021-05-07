#include <iostream>
using namespace std;
int reverse(int arr[],int start,int end)
   { 
    while(start<end)
   { 
    int temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    start++;
    end--;
    }
    }

int print(int arr[],int n)
    {
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    }

   
int main(){
    int n,i;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   int start;
   int end;
   
   cout<<reverse(arr,0,n-1);
   cout<<print(arr,n);

    return 0;
}