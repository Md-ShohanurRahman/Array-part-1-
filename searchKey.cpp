#include <iostream>
using namespace std;

int searchKey(int *ptr,int n,int key){
    for(int i=0;i<n;i++){
        if(ptr[i]==key){
            return i;
        }
    }
    return -1;
}

int main (){
    int arr[]={22,33,55,34,43};
    int n= sizeof(arr)/sizeof(int);
    int key=55;

    cout<<searchKey(arr,n,key)<<endl;
    return 0;
}