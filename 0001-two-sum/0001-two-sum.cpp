class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mpp;

        for (int j = 0; j < nums.size(); j++) {
            int complement = target - nums[j];

            if (mpp.find(complement) != mpp.end()) {
                return {mpp[complement], j};
            }

            mpp[nums[j]] = j;
        }

        return {};
    }
};