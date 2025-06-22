#include<iostream>
#include<vector>

using namespace std;

int getMaxSumSubArray(vector<int>arr, int k){
    int n=arr.size();
    int sum=0;
    for(int i=0; i<k; i++)
    {
        sum+=arr[i];
    }
    int maxSum = sum;
    for(int i=k; i<n; i++)
    {
        sum-=arr[i-k];
        sum+=arr[i];
        if(maxSum < sum)
        {
            maxSum = sum;
        }
    }
    return maxSum;
}
/*subarray of size k with max sum*/
int main(){
    int k=4;
    vector<int>arr = {2,3,1,4,2,6,7,8,9,10,12,2,4,6,5};
    cout<<getMaxSumSubArray(arr,k)<<"\n";
}