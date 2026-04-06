class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map1;
        int s = nums.size();

        for (int i = 0; i < s; i++) {
            map1[nums[i]] = i;
        }

        for (int i = 0; i < s; i++) {
            int complement = target - nums[i];
            if (map1.count(complement) && map1[complement] != i) {
                return {i, map1[complement]};

            }
        }
        return {};
    }
};
