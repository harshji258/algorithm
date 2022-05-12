#include<iostream>

using namespace std;

 //for sorting
void sorting(int a[],int n){
    for(int i=0;i<n;i++){
        int temp=0;
        for(int j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

void display(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int binary(int a[],int n,int key){
    int start=0;
    int end1 = n-1;
    while(end1>=start){
        int mid = (start+end1)/2;
        if(a[mid]==key){
            return mid;
//           cout<<"element found in "<<mid<<" location";
//           break;
        }
        else if(a[mid]<key){
            start = mid +1;
        }
        else if(a[mid]>key){
            end1 = mid-1;
        }
    }
    return -1;
}

int main(){
    int n,key;
    cout<<"Enter the size of array = ";
    cin>>n;

    int arr[n];
    cout<<"Enter the "<<n<< " element in array = ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the number for searching = ";
    cin>>key;

   sorting(arr,n);
   cout<<"sorting array is : ";
   display(arr,n);

    if(binary(arr,n,key)!=-1){
        cout<<"Element Found!. IN "<<binary(arr,n,key)<<" Index";
    }
    else{
        cout<<"Element Not Found!";
    }
    return 0;
}
