https://leetcode.com/problems/add-strings/

class Solution {
public:
    string addStrings(string num1, string num2) {
        string sum;
        int carry = 0;
        
        int len1 = num1.size()-1;
        int len2 = num2.size()-1;
        
        while(carry == 1 || len1>=0 || len2>=0){
            int x = len1>=0 ? num1[len1]-'0' : 0;
            int y = len2>=0 ? num2[len2]-'0' : 0;
            int z = x+y+carry;
            if (z>9){
                z = z-10;
                carry = 1;
            }
            else {
                carry = 0;
            }
            sum = to_string(z)+sum;
            len1 -= 1;
            len2 -= 1;
            
        }
        
        return sum;
    }
};
