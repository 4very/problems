#include <map>
#include <string>
#include <iostream>


class Solution {
public:
    int lengthOfLongestSubstring(std::string s) {
        
        unsigned int val = 0;
        std::map<char, bool> hmap;



        for(int i = 0; i < s.length(); ++i) {
            
            unsigned int counter = 0;

            for(int j = i; j < s.length(); ++j) {
                
                if (hmap.find(s[j]) == hmap.end()) {
                    counter++;
                    hmap[s[j]] = 1;
                } else {
                    break;
                }
            }

            hmap.clear();

            if (counter > val) {
                val = counter;
            }

            if (s.length() - i <= val) {
                return val;
            }
        }
        return val;
    }
};