class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> um;
         //using singular unordered_map (better that normal map )
         for(char a : s){
            um[a]++;
         }

         for(char b:t){
            um[b]--;
         }
         for(auto c:um){
            if(c.second!=0){return false;}
         }
         return true;
    }
};
