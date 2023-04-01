class Solution {
public:
    vector<int> findKLargest(vector<int>& nums, int k) {
        vector<int> ans;
        priority_queue<int,vector<int>,greater<int>> minh;
        int n= nums.size();
        for (int i=0;i<n;i++)
        {
            minh.push(nums[i]);
            {
                if (minh.size()>k)
                    minh.pop();
            }
        }
        while(minh.size()>0){
          ans.push_back(minh.top());
          minh.pop();
        }
        return ans;
    }
};
