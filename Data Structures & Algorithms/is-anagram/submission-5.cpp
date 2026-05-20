class Solution {
public:
    bool isAnagram(string s, string t) {
        int const s_ = s.size(), t_ = t.size();

        if (!(s_ == t_) || s_ < 0 || t_ < 0) return false;

        unordered_map<int,int> dp1(s_), dp2(t_);
        for (int i = 0; i < s_; i++) {
            dp1[s[i]]++;
        }

        for (int j = 0; j < t_; j++) {
            dp2[t[j]]++;
        }

        for (int k = 0; k < s_; k++) {
            char c = s[k];

            if (dp1[c] != dp2[c]) return false;
        }

        return true;
    }
};
