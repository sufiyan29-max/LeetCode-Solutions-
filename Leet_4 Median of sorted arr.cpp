class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double ans = 0;

        // merging the 2 arrays in array nums1
        for(int i = 0 ; i <nums2.size() ; i++){
            nums1.push_back( nums2[i]) ;
        }

        // sorting the array nums1

        sort(nums1.begin(), nums1.end()) ;

        // finding the median 

        double index = nums1.size()/2 ;

        if (nums1.size() % 2 == 1 ) {
            ans = nums1[index] ;
        }

        if (nums1.size() % 2 == 0 ){
            ans = (nums1[index] + nums1[index -1] ) /2.0 ;
        }
    return ans ;
    }
};