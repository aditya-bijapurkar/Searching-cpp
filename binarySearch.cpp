#include <iostream>
using namespace std;

/* 

BINARY SEARCH!
***sorted data is required***
The middle value of a sorted array is compared with the key.
Accordingly if key value is lesser-> prior elements are checked, if higher -> later elements are checked, if equal -> value is returned.

For an array with 1 million elements,
Linear search takes '1 million' comparisons
Binary search takes only '20' comparisons!


time complexities:

   worst case: O(logn)   //last element
   best case: O(1)   //middle element

*/

int binarySearch(int arr[], int high, int low, int key){
    if(high>=low){
        int mid=low+(high-low)/2;
        if(arr[mid]==key){
            return mid;
        }
        if(arr[mid]>key){
            return binarySearch(arr, mid-1, low, key);
        }
        if(arr[mid]<key){
            return binarySearch(arr,high,mid+1,key);
        }
    }
    return 1;
}


int main(){
    int arr[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
    int key;
    cout<<"Enter a key to be searched: ";
    cin>>key;
    int n=sizeof(arr)/sizeof(arr[0]);
    int check=binarySearch(arr,n-1,0,key);
    if(check!=1){
         cout<<"Element is PRESENT in the array!";
     }
     else{
         cout<<"Element is ABSENT in the array.";
     }
     return 0;
}

/*
code written by Aditya Bijapurkar
*/