/*
 * @lc app=leetcode id=13 lang=golang
 *
 * [13] Roman to Integer
 */

package leetcode

// @lc code=start

var conv = map[string]int{
	"I": 1,
	"V": 5,
	"X": 10,
	"L": 50,
	"C": 100,
	"D": 500,
	"M": 1000,
}

func romanToInt(s string) int {
	var retval int = 0

	for i, c := range s {
		var val int = conv[string(c)]
		if i < len(s)-1 && val < conv[string(s[i+1])] {
			val = -val
		}
		retval = retval + val
	}
	return retval

}

// @lc code=end
