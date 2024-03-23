class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<double>merged(nums1.size()+nums2.size());

        merge(nums1.begin(),nums1.end(),nums2.begin(),nums2.end(),merged.begin());

        sort(merged.begin(), merged.end());

        int m_size= merged.size();

        if(m_size%2!=0){
            int index= (m_size/2)+1;
            return merged[index-1];
        }else{
            int index = m_size/2;
            return (merged[index-1]+ merged[index])/2;
        }
    }
};