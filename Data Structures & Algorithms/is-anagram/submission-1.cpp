class Solution {
public:
    bool isAnagram(string s, string t) {
        //implementing hashmap 2 hashmaps and == to return bool val 
        unordered_map<char,int> sm;
        unordered_map<char,int> tm;

        for(char a:s){
            sm[a]++;
        }
        for(char b:t){
            tm[b]++;
        }
        return tm==sm;
    }
};
