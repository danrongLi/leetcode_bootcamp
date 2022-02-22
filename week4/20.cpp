https://leetcode.com/problems/valid-parentheses/

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        
        for(int i = 0; i<s.size(); i += 1){
            char ch = s[i];
            if(ch=='(' || ch=='[' || ch=='{'){
                st.push(ch);
            }
            else{
                if(st.empty()){
                    return false;
                }
            
            }
            char t = st.top();
            if(ch==')'){
                if(t!='('){
                    return false;
                }
                else{
                    st.pop();
                }
            }
            else if (ch==']'){
                if(t!='['){
                    return false;
                }
                else{
                    st.pop();
                }
            }
            else if (ch=='}'){
                if(t!='{'){
                    return false;
                }
                else{
                    st.pop();
                }
            }
            
        }
        if(st.empty()){
            return true;
        }
        else{
            return false;
        }
    }
};
