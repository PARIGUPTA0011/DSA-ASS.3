#include <bits/stdc++.h> 
int largestElement(vector<int> &arr, int n) {
    // Write your code here.

    int a = -1 ;
    for(int i = 0 ; i< arr.size() ; i++){
      if (arr[i] > a) {
        a = arr[i];
      }
    }
    return a;
}
