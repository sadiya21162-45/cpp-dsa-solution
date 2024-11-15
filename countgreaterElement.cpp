#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int countGreaterElement(int arr[] , int n){
int maxElement = *max_element( arr , arr+n);
int maxCount = 0 ;
for(int i = 0 ; i <n; i++){
    if(arr[i]==maxCount){
        maxCount++;
    }
}
int result = n - maxCount;
return result ;
}
int main(){
int arr[] ={ 1,3,-2 ,6,4,9,2,65,4,2,-4,-9};
int n = sizeof(arr)/sizeof(arr[0]);
int count = countGreaterElement(arr , n);
cout<<"the sum of the all greater element present in this element"<<count<<endl;
return 0 ;
}
