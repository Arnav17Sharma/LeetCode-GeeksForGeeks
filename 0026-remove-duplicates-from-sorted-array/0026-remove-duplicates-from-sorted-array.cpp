class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> v;
        for(auto x: nums){
            if(find(v.begin(), v.end(), x) == v.end()){
                v.push_back(x);
            }
        }
        for(int i=0; i<v.size(); i++)
            nums[i] = v[i];
        return v.size();
    }
};