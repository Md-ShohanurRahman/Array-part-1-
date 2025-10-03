#include <iostream>
using namespace std;


void func(int arr[]){
    *arr=9999;
    *(arr+3)=8888;
    cout<<arr[3]<<endl;
}
void func2(int *ptr){
*(ptr+2)=7777;
}

void func3(int arr[],int n){
   for (int i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }
   cout<<endl;
}

void func4(int arr[],int n){
   for (int i=0;i<n;i++){
    cout<<*(arr+i)<<" ";
   }
   cout<<endl;
}



int main (){
    int arr[]={22,33,55,34,43};
    int n= sizeof(arr)/sizeof(int);
    cout<<arr<<endl;
    cout<<*arr<<endl;
    func(arr);
    cout<<arr[0]<<endl;
    cout<<arr[3]<<endl;
    func2(arr);
    cout<<arr[2]<<endl;
    func3(arr,n);
    func4(arr,n);
    return 0;
}
