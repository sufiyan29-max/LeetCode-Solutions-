class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> intersection ;
        for (int i = 0 ; i<nums1.size(); i++){
            for(int j = 0 ; j<nums2.size() ; j++){
                if(nums1[i] == nums2[j]){
                    intersection.push_back(nums2[j]) ;
                }
            }
        }

        vector<int> result ;

        for (int i = 0 ; i<intersection.size() ; i++){
            bool duplicate = false ;
            for(int j =0 ; j<result.size () ; j++){
                if (intersection[i]==result[j]){
                    duplicate = true ;
                    break ;
                }
            }
            if(duplicate ==false){
                result.push_back(intersection[i]) ;
            }
        }
    return result ;
    }
};