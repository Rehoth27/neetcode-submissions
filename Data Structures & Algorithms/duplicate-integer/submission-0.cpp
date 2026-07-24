class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> um;
        for(int i:nums){um[i]++;}
        for(auto k:um){if(k.second>1){return true;}}return false;
    }
};