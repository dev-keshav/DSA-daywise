// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // Function to find element in sorted array
    // arr: input array
    // N: size of array
    // K: element to be searche
    int searchInSorted(int arr[], int N, int K) 
    { 
    
       // Your code here
    //   int l=0, r=N-1;
    //   while(l<=r){
    //       int mid = l+(r-l)/2;
           
    //       if(arr[mid]==K){
    //           return mid;
    //       }
    //       if(arr[mid]>K){
    //           return r=mid-1;
    //       }
    //       if(arr[mid]<K){
    //           return l=mid+1;
    //       }
    //   }
    //   return -1;
    
         int mid = N/2;
         int num=-1;
         
         if(arr[mid]==K){
             num = 1;
         }
         else if(arr[mid]>K){
             for(int i=0; i<N; i++){
                 if(arr[i]==K){
                     num=1;
                 }
             }
         }
         else if(arr[mid]<K){
             for(int i=mid+1; i<N; ++i){
                 if(arr[i]==K){
                     num=1;
                 }
             }
         }
         return num;
    }
};

// { Driver Code Starts.


int main(void) 
{ 
    
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        
        Solution ob;
        cout << ob.searchInSorted(arr, n, k) << endl;

    }

	return 0; 
} 
  // } Driver Code Ends
