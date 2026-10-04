class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        // int a = nums.size();
        // vector<int> result(a);
        // for(int i =0;i<a;i++){
        //   result[i]=nums[i]*nums[i];
        // }
        // sort(result.begin(),result.end());
        // return result;
        int n = nums.size();
        vector<int> result(n);
        int left = 0, right = n - 1;
        int pos = n - 1;

        while (left <= right) {
            int leftSq = nums[left] * nums[left];
            int rightSq = nums[right] * nums[right];
            if (leftSq > rightSq) {
                result[pos--] = leftSq;
                left++;
            } else {
                result[pos--] = rightSq;
                right--;
            }
        }
        return result;
    }
};