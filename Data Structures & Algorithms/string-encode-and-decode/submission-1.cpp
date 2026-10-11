
class Solution {
public:
    string encode(vector<string>& strs) {
        string key;

        for (string s : strs) {
            int n = s.length();
            key += to_string(n);
            key += '#';
            key += s;
        }

        return key;
    }

    vector<string> decode(string s) {
        int n = s.length();
        vector<string> res;
        int i = 0;

        while (i < n) {
            int j = i;

            while (s[j] != '#') {
                j++;
            }

            int len = stoi(s.substr(i, j - i));
            string k = s.substr(j + 1, len);

            res.push_back(k);
            i = j + 1 + len;
        }

        return res;
    }
};
