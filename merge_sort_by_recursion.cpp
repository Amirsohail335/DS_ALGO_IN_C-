#include<iostream>
using namespace std;


void merge(int *arr, int s , int e){

    int mid = (s+e)/2;

    int len1= mid - s+1;

    int len2= e-mid;

    int *first = new int[len1];
    int *second = new int[len2];

    //copy value
    int mainArrayIndex=s;
    for(int i=0; i <len1; i++){
        first[i] = arr[mainArrayIndex++];
    }

    mainArrayIndex=mid +1;
    for(int i=0; i <len2; i++){
        second[i] = arr[mainArrayIndex++];
    }
// merge two indices
    int index1=0;
    int index2=0;
    mainArrayIndex=s;
    while(index1< len1 && index2 < len2){
        if(first[index1]< second[index2]){
            arr[mainArrayIndex++] = first[index1++];
        }else{
            arr[mainArrayIndex++] = second[index2++];
        }
    }
    while(index1 < len1){
        arr[mainArrayIndex++] = first[index1++];
    }
    while(index2 <len2){
        arr[mainArrayIndex++] = second[index2++];
    }


}

void mergeSort(int *arr , int s , int e){
//base condition
    if(s>=e){
        return;
    }

    int mid = (s+e)/2;
  
  //first recursive call
    mergeSort(arr, s, mid);

//second recursive call
    mergeSort(arr, mid+1, e);

//final recursive call
    merge(arr,s,e);


}


int main(){

    int arr[6] = {3,5,67,7,8,5};
    int n = 6;

    mergeSort(arr,0,n-1);

    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";

    }

    return 0;
}
