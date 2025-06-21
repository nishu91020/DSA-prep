#include<iostream>
#include<vector>

using namespace std;

int binarySearch(vector<int>arr, int num){
    int l=0,r=arr.size()-1;
    while(l<=r)
    {
        int mid = l+(r-l)/2;
        if(arr[mid] == num)
            return mid;
        if(arr[mid] > num)
        {
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    return -1;

}
int main(){
    vector<int>arr = {2,4,6,8,10,12,15,19,25};
    cout<<"array size "<<arr.size()<<"\n";
    cout<<"element at index"<<binarySearch(arr, 25)<<"\n";

    return 0;
}