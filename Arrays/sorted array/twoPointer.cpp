#include<iostream>
#include<vector>

using namespace std;

/*Given a sorted array of integers arr and an integer target, return all unique pairs of elements (arr[i], arr[j]) such that:

arr[i] + arr[j] == target

i != j

Each pair should be unique, i.e., no duplicates in the output.*/
vector<pair<int,int>> getPairs(vector<int>arr, int target){
    int i=0,j=arr.size()-1;
    int n= arr.size();
    vector<pair<int,int>>ans;
    while(i< n && j>=0 && i<j)
    {
        int sum = arr[i]+arr[j];
        if(sum<target)
        {
            i++;
        }
        else{
            if(sum == target)
            {
                ans.push_back({i,j});
            }
            j--;
        }
    }
    return ans;
}
int main(){
    vector<int>arr = {1,2,3,3,4,5,6,7,8,9,10,11,12,13};
    int target = 6;
    vector<pair<int,int>> v = getPairs(arr,target);
    for (auto pair: v)
    {
        cout<<pair.first<<" "<<pair.second<<"\n";
    }
}
