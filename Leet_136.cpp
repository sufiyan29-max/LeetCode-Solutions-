#include <iostream>
#include <vector>

int singleNum(vector<int>&nums){

    for(int i = 0 ; i<nums.size(); i++){
        int count = 0;
        for(int j = 0; j<nums.size(); j++){
            if(nums.at(i)== nums.at(j)){
                count++ ;
            }
        }
        if (count == 1){
            return nums.at(i) ;
        }
    }

}

int main(){

    vector<int> nums ;  
    singleNum(nums) ;
    return 0; 
}