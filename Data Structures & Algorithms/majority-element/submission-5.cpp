class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> um;
        for(int i:nums){
            um[i]++;
        }
         int val=0;int mxcnt=0;
        for(auto j:um){
            if(j.second>mxcnt){
                mxcnt=j.second;
                val=j.first;
            }

        }
        return val;

    }
};