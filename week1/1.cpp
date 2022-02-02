https://leetcode.com/problems/two-sum/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
//         O(n)
        vector<int> ans;
        unordered_map<int,int> mp;

        for(int i = 0; i < nums.size(); i += 1){
            int temp = target-nums[i];
            if(mp.find(temp) != mp.end()){
                ans.push_back(mp[temp]);
                ans.push_back(i);
                break;
            }
            else{
                mp.insert(make_pair(nums[i], i));
            }

        }
        return ans;
    }
};

