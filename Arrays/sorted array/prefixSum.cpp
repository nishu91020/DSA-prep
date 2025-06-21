#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>

using namespace std;

int subarraySum(vector<int>& nums, int k) {
    unordered_map<int, int> prefixCount;
    int count = 0, prefixSum = 0;

    // base case: to handle when prefixSum == k directly
    prefixCount[0] = 1;

    for (int num : nums) {
        prefixSum += num;

        // check if there exists a prefix sum that would make this subarray sum to k
        if (prefixCount.find(prefixSum - k) != prefixCount.end()) {
            count += prefixCount[prefixSum - k];
        }

        // store/update current prefixSum in the map
        prefixCount[prefixSum]++;
    }

    return count;
}
/*Given an array of integers nums and an integer k, 
return the total number of continuous subarrays whose sum equals to k.*/
int main(){
    vector<int>v = {2,3,5,4,1,-2,7,2,9,4,3,8};
    cout<<subarraySum(v,5)<<"\n";
}