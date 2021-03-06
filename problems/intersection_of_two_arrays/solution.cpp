class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        std::sort(nums1.begin(), nums1.end());
        std::sort(nums2.begin(), nums2.end());
        
        std::vector<int> result;
        int i = 0, j = 0;
        while (i < nums1.size() && j < nums2.size()) {
            if (nums1[i] < nums2[j]) {
                i++;
            } else if (nums1[i] > nums2[j]) {
                j++;
            } else {
                if (!result.empty()) {
                    if (result.back() != nums1[i]) {
                        result.push_back(nums1[i]);
                    }
                } else {
                    result.push_back(nums1[i]);
                }
                i++,j++;
            }
        }
        return result;
    }
};