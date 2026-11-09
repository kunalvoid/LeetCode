class Solution {
public:
    int partition(vector<int> &arr,int low,int high){
        int mid=low+(high-low)/2;
        swap(arr[low],arr[mid]);

        int pivot=arr[low];
        int i=low;
        int j=high;
        while(i<j){
           while(i<=high && arr[i]<=pivot){
             i++;
           }
           while(j>=low && arr[j]>pivot){
             j--;
           }
           if(i<j) swap(arr[i],arr[j]);
        }
        swap(arr[low],arr[j]);
        return j;
    }
    
    void qs(vector<int> &arr,int low,int high){
        if(low<high){
            int pindex=partition(arr,low,high);
            qs(arr,low,pindex-1);
            qs(arr,pindex+1,high);
        }
    }
    vector<int> sortArray(vector<int>& nums) {
        qs(nums,0,nums.size()-1);
        return nums;
    }
};