class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int ind = -1;

        // Step 1: find pivot — rightmost index where nums[i] < nums[i+1]
        for(int i = n-2; i >= 0; i--){
            if(nums[i] < nums[i+1]){
                ind = i;
                break;
            }
        }

        // Step 2: no pivot found — array is the last permutation, reverse to get the first
        if(ind == -1){
            reverse(nums.begin(), nums.end());
            return;
        }

        // Step 3: find rightmost element greater than nums[ind], swap
        for(int j = n-1; j > ind; j--){
            if(nums[j] > nums[ind]){
                swap(nums[j], nums[ind]);
                break;
            }
        }

        // Step 4: reverse the suffix after ind
        reverse(nums.begin() + ind + 1, nums.end());
    }
};
