class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum = INT_MIN ;
        int currsum = nums[i];
        for(int i=1; i<nums.size(); i++){
            currsum = max(currsum , currsum+nums[i])
            maxsum = max(maxsum , currsum) ;            
        }
    return maxsum;
        }
};