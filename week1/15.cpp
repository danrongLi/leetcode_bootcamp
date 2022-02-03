https://leetcode.com/problems/3sum/

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> res;
        unordered_set<int> dups;
        unordered_map<int,int> seen;

        for (int i = 0; i < nums.size(); i += 1){
            if(dups.insert(nums[i]).second){
                for (int j = i+1; j < nums.size(); j += 1){
                    int temp = -nums[i]-nums[j];
                    auto it = seen.find(temp);
                    if(it != end(seen) && it->second == i){
                        vector<int> triplet = {nums[i], nums[j], temp};

                        sort(begin(triplet), end(triplet));
                        res.insert(triplet);
                    }
                    seen[nums[j]] = i;
                }
            }
//             else{

//             }
        }
        return vector<vector<int>>(begin(res), end(res));
    }
};
