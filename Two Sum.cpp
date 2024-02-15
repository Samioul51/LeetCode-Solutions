/*

Link: https://leetcode.com/problems/two-sum/

*/


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i,j,x,y,n;
        n=nums.size();
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(nums[i]+nums[j]==target){
                x=i;
                y=j;
                break;
            }
        }
    }
    vector<int>c(2);
    c[0]=x;
    c[1]=y;
    return c;
    }
};