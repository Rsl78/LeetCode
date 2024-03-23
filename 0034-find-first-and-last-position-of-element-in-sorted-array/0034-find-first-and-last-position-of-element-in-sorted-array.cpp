class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first_idx = -1;
        int low = 0, high = nums.size() - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target) {
                first_idx = mid;
                high = mid - 1;
            } else if (target > nums[mid]) {
                low = mid + 1;
            } else if (target < nums[mid]) {
                high = mid - 1;
            }
        }

        int last_idx = -1;
        low = 0, high = nums.size() - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target) {
                last_idx = mid;
                low = mid + 1;
            } else if (target > nums[mid]) {
                low = mid + 1;
            } else if (target < nums[mid]) {
                high = mid - 1;
            }
        }

        return {first_idx, last_idx};
    }
};