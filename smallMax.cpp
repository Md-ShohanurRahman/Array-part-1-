#include <iostream>
using namespace std;
int main (){
    int arr[]={22,33,55,34,43};
    int n= sizeof(arr)/sizeof(int);
    int max=arr[0];
    int min=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<max<<endl;

     for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<min<<endl;
    return 0;
}