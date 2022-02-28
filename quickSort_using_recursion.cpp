#include<iostream>
using namespace std;

int partition(int arr[], int s, int e){
    int pivot = arr[s];

    int cnt =0;
    for(int i=s+1; i<=e; i++){
        if(arr[i] <= pivot)
            cnt++;
    }

    // place pivot at right place
    int pivotIndex = s+cnt;
    swap(arr[pivotIndex], arr[s]);

    //left and right parts
    int i = s, j = e;
    while( i < pivotIndex && j > pivotIndex){

        while(arr[i] < pivot){
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if(i <pivotIndex && j>pivotIndex){
            swap(arr[i++], arr[j--]);
        
        }
        
    }

}

void quickSort(int arr[], int s, int e){

    //base case
    if(s>=e)
        return;

    //partition
    int p = partition(arr , s, e);

    //sorting left part
    quickSort(arr, s, p-1);

    //sorting right part
    quickSort(arr, p+1, e);

}

int main(){

    int arr[10] = {2,3,4,5,1,3,7,8,9,0};
    int n =10;
    quickSort(arr,0,n-1);

    for(int i =0; i<n; i++){
        cout <<arr[i] << " ";
    }
    cout << endl;
}
