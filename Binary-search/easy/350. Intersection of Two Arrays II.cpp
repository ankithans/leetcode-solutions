// https://leetcode.com/problems/intersection-of-two-arrays-ii/


// two pointers approach   O(mlogm + nlogn)
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int i = 0, j = 0;
        vector<int> v;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        while(i < nums1.size() && j < nums2.size()) {
            if(nums1[i] < nums2[j]) {
                i++;
            } else if(nums1[i] > nums2[j]) {
                j++;
            } else {
                v.push_back(nums1[i]);
                i++; j++;
            }
        }
        return v;
    }
};


// sorting and searching  O(mlogm + nlogm) or O(nlogn + mlogn)
// use binary search in the smaller array
// performs better when size difference in two arrays is higher