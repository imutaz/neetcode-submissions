class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> dp;

        for(int i = 0; i < nums.size(); i++) {
            int sub = target - nums[i];

            if (dp.find(sub) != dp.end()) {
                return {dp[sub], i};
            }
            dp[nums[i]] = i;
        }

        return {};
    }
};
