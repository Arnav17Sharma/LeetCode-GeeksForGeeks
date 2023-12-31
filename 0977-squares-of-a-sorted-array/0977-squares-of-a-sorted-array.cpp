class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        int l = 0, h = n-1;
        for(int i=n-1; i>=0; i--){
            if(abs(nums[l]) >= abs(nums[h])){
                ans[i] = nums[l] * nums[l];
                l++;
            }
            else{
                ans[i] = nums[h] * nums[h];
                h--;
            }
        }
        return ans;
    }
};