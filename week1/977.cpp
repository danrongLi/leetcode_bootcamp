https://leetcode.com/problems/squares-of-a-sorted-array/

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
//         merge sort/ quick sort ---> O(nlogn) brute force
//         the following method: O(n)
        int n = nums.size();
        int left = 0;
        int right = n-1;

        vector<int> ans(n);
        for(int i = n-1; i >= 0; i -=1){
            int temp;
            if(abs(nums[left]) < abs(nums[right])){
                temp = nums[right];
                right -= 1;
            }
            else {
                temp = nums[left];
                left += 1;
            }
            ans[i] = temp * temp;
        }
        return ans;
    }
};