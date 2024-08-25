class Solution {
public:
    bool canJump(vector<int>& nums) {
        int len = nums.size();
        int temp = 0;
        if (nums.size() == 1) return true;
        for (int i = 0; i <= temp && i < len; i++) {
            if (i + nums[i] >= temp)temp = i + nums[i];
            if (temp >= len - 1) return true;
        }
        return false;
    }
};