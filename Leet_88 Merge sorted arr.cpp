class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // we should not remove 0 from either vectors cause we dont know whether the elemnts are inckuded or not.

        for(int i = 0 ; i<n ; i++){
           nums1[m+i] = nums2[i] ;
        }

        sort(nums1.begin(), nums1.end()) ;
    }
};