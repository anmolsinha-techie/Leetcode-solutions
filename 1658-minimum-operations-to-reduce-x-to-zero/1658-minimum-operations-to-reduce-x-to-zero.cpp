class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        long long total = 0;
        for (int n : nums) total += n;
        long long target = total - x;

        if (target < 0) return -1;
        if (target == 0) return nums.size();

        int n = nums.size();
        int left = 0;
        long long currSum = 0;
        int maxLen = -1;

        for (int right = 0; right < n; right++) {
            currSum += nums[right];
            while (currSum > target && left <= right) {
                currSum -= nums[left];
                left++;
            }
            if (currSum == target) {
                maxLen = max(maxLen, right - left + 1);
            }
        }

        return maxLen == -1 ? -1 : n - maxLen;
    }
};