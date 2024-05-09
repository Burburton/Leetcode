/*
 * @lc app=leetcode id=9 lang=c
 *
 * [9] Palindrome Number
 */

// @lc code=start
bool isPalindrome(int x) {
    long long int tmp = x;
    long long int rev = 0;
    if (x<0)
        return false;
    while (tmp) {
        int l = tmp%10;
        tmp = tmp / 10;
        rev = rev * 10 + l;
    }

    return rev == x;   
}
// @lc code=end

