#include <iostream>
using namespace std;

int binarySearch(int *arr,int n ,int key ){
     int start=0;
     int end=n-1;
     
     while(start<=end){
        int mid = (start+end)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
     }
     return -1;
}

int main(){
     int arr[]={11,22,33,44,55,66,77,88,99};
    int n= sizeof(arr)/sizeof(int);
    cout<<"search the key"<<endl;
    int key;
    cin>>key;
    cout<<binarySearch(arr,n,key)<<endl;

    return 0;
}
