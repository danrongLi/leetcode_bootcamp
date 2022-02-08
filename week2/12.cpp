https://leetcode.com/problems/integer-to-roman/

class Solution {
public:
    string intToRoman(int num) {
        vector<int> values = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        string romans[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        string ans = "";
        int i = 0;
        
        while(num>0){
            if(num>=values[i]){
                ans += romans[i];
                num -= values[i];
                i -= 1;
            }
            i += 1;
        }
        return ans;
    }
};
