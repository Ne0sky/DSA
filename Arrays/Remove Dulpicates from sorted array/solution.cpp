#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) { // Two pointer approach

        int l=1; // left pointer starts with 1 god knows why
        int r;  // right pointer =0
        int size=nums.size();

        if(size==0) // always checking for edge cases
        return 0;

        for( r=0;r<size-1;r++)
        {
            if(nums[r]!=nums[r+1]) // when unique element is encountered, swap
            {
                
                nums[l]=nums[r+1]; // swap the numbers to update the array
                l++;// increment the new size of the array to be returned
            }
            
        }

        return l;
        
    }
};