/*
 * @lc app=leetcode id=383 lang=cpp
 *
 * [383] Ransom Note
 */

// @lc code=start

#include <string>
#include <map>

using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

        map<char, int> mmap = freqMap(magazine);
        map<char, int> rmap = freqMap(ransomNote);

        for (map<char, int>::iterator it = rmap.begin(); it != rmap.end(); it++){
            if (mmap.find(it->first) == mmap.end() || mmap[it->first] < it-> second){
                return false;
            }
        }
        return true;


        

    }

    map<char, int> freqMap(string s){
        map<char, int> retval;
        for (char& c: s) {
            if (retval.find(c) == retval.end()){
                retval[c] == 1;
            } else {
                retval[c]++;
            }
        }
        return retval;
    }
};
// @lc code=end

