class Solution {
public:
    bool isPalindrome(int x) {
        string str = to_string(x);
        int len = str.size();

        if (len % 2 == 1) {
            for (int i = 1; i <= (len / 2); i++) {
                if (str[i-1] != str[len - i]) {
                    return false;
                }
            }
        }else{
            for (int i = 0; i < len / 2; i++) {
                if (str[i] != str[len - i]) {
                    return false;
                }
            }
        }

        return true;
    }
};