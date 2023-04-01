class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res;
        int start=0;
        int first=-1, last=-1;
        int end= nums.size()-1;
        while(start <=end)
        {
            int mid = start + (end-start)/2;
            if (target==nums[mid])
            {
                first=mid;
                end=mid-1;
                
            }
            else if (target < nums[mid])
                end= mid-1;
            else 
                start = mid+1;            
        }
        start=0,end= nums.size()-1;
        while (start <= end)
        {
            int mid = start+(end-start)/2;
            if (target== nums[mid])
            {
                last=mid;
                start=mid+1;
            }
            else if (target< nums[mid])
                end= mid-1;
            else
                start = mid+1;
        }
        res.push_back(first);
        res.push_back(last);
        return res;
    }
};

// Another way of doing it, using different functions
class Solution {
public:
    int first(vector<int>& nums, int target){
        int s = 0;
        int e = nums.size() -1;
        int res = -1;
        while(s<=e){
            int mid = s + (e-s)/2;
            if(target == nums[mid]){
                res = mid;
                e= mid-1;
            }
            else if(target< nums[mid]){
                e = mid -1;
            }
            else{
                s = mid+1;
            }
        }
        return res;
    }
    int last(vector<int>& nums, int target){
        int s = 0;
        int e = nums.size() -1;
        int res = -1;
        while(s<=e){
            int mid = s + (e-s)/2;
            if(target == nums[mid]){
                res = mid;
                s = mid+1;
            }
            else if(target< nums[mid]){
                e = mid -1;
            }
            else{
                s = mid+1;
            }
        }    
         return res;  
    }
    vector<int> searchRange(vector<int>& nums, int target) {
       vector<int> ans;
       int fIn = first(nums, target);
       int lIn = last(nums, target);
       ans.push_back(fIn);
       ans.push_back(lIn);
       return ans; 
    }
};
