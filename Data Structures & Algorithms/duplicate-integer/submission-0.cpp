class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> map1;

        for (int i = 0; i < n; i++) {
            int num = nums[i];
            if (map1.count(num)) {
                return true;
            }
            map1.insert(num);
            
        }
        return false;
    }
};