/*
 * @lc app=leetcode id=26 lang=c
 *
 * [26] Remove Duplicates from Sorted Array
 */

// @lc code=start
int removeDuplicates(int* nums, int numsSize) {
    int current=0;
    for (int i=1;i<numsSize;i++){
        if (nums[i] == nums[current])
            continue;
        nums[++current] = nums[i];
    }
    return current+1;
}
// @lc code=end

