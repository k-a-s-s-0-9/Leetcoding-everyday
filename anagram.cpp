class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> count; 
        for (char c : s){
            count[c]+=1;
        }
        for (char c : t){
            count[c]-=1;
        }
        for (auto &p : count) {
            if (p.second != 0){
                return false;
            }
        }
        return true;
    }
};
