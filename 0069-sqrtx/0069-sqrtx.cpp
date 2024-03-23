class Solution {
public:
    int mySqrt(int x) {
        int low=1, high=x, ans;

        while(low<=high){
            int mid = low + (high-low)/2;

            if(mid*mid <=x){
                ans= mid;
                low=mid+1;
            }else if(mid *mid>x){
                high= mid-1;
            }else{
                low=mid+1;
            }
        }
        return ans;
    }
};