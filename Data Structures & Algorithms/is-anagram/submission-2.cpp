class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }

        int a = s.size();
        unordered_map<char, int> map1;
        unordered_map<char, int> map2;

        for (int i = 0; i < a; i++) {
            char letter = s[i];
            char letter2 = t[i];
            map1[letter]++;
            map2[letter2]++;
        }

        if (map1 == map2) {
           return true; 
        }
        return false;
    }
};