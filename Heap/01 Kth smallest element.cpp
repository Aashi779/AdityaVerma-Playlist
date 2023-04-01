class Solution {
public:
    int findKthSmallest(vector<int>& nums, int k) {
        priority_queue<int> maxh;
        
        for(int i = 0; i< maxh.size(); i++){
           maxh.push(nums[i]);
           if(maxh.size()>k){
               maxh.pop();
           }
        }
        return maxh.top();
    }
};
