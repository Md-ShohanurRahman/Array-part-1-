#include <iostream> 
using namespace std;

void printArray(int *ptr,int n){
     cout<<"the reverse array"<<endl;
     for(int i=0;i<n;i++){
        cout<<ptr[i]<<" ";
     }
     cout<<endl;
}
int main (){
      int arr[]={22,33,55,34,43};
    int n= sizeof(arr)/sizeof(int);
    cout<<"the present array"<<endl;
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int copyArray[n];
    for(int i=0;i<n;i++){
        int j=n-i-1;
        copyArray[j]=arr[i];
    }
    for(int i=0;i<n;i++){
       arr[i]=copyArray[i];
    }

    printArray(arr,n);

    return 0;
}