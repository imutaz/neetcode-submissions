class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> dp(nums.size());

        for (int i = 0; i < nums.size(); i++) {
            dp[nums[i]]++;
            if (dp[nums[i]] > 1) return true;
        }

        return false;
    }
};