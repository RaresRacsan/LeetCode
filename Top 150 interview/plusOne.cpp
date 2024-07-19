class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int k = digits.size() - 1;
        while(digits[k] == 9 && k > 0){
            digits[k] = 0;
            k--;
        }
        if(k == 0 && digits[0] == 9){
            digits[0] = 0;
            digits.insert(digits.begin(), 1);
        }
        else{
            digits[k]++;
        }
        return digits;
    }
};
