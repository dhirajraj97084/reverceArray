#include<iostream>
using namespace std;

int reverceArray(int arr[],int n){
    int s=0,e=n-1;
    while (s<e)
    {
       int temp=arr[s];
       arr[s]=arr[e];
       arr[e]=temp;
       s++;
       e--;
    }  

}

int main(){
    int arr[6]={3,5,7,9,1,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"my original array is:"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    } 
    cout<<endl;
    reverceArray(arr, size);
    cout<<"my reversed array is:"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    } 
    cout<<endl;

}