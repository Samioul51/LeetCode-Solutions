/*

Link: https://leetcode.com/problems/find-polygon-with-the-largest-perimeter/?envType=daily-question&envId=2024-02-15

*/


class Solution {
public:

long long result(vector<int>& v, int g){
    long long c;
    if(v.size()<3)
        c=-1;
    else{
        long long i;
        long long sum=0;
        for(i=0;i<v.size()-1;i++){
                sum+=v[i];
        }
        if(sum<=v[v.size()-1]){
            v.pop_back();
            result(v, v.size());
        }
        else{
            long long sum=0;
            long long i;
            for(i=0;i<v.size();i++){
                sum+=v[i];
            }
            c=sum;
        }
    }
    return c;
}
    long long largestPerimeter(vector<int>& nums) {
        long long g=nums.size();
        sort(nums.begin(),nums.end());
        long long c;
        if(g<3)
            c=-1;
        else{
           c= result(nums,g);
            
        }
        return c;
    }
};