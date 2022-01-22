#include<iostream>
using namespace std;
#include<vector>
class Solution {
public:
    int duplicateInArray(vector<int>& nums) {
        int n = nums.size();
        int left = 1, right = n - 1;
        while (left < right) {
            int mid = (left + right) >> 1;
            int s = 0;
            for (auto x : nums) {
                if (x >= left && x <= mid)
                {
                    s++;
                }
            }
            if (s > mid - left + 1) right = mid;
            else left = mid + 1;
        }
        return right;
    }
};


int main()
{   
    Solution A;
    vector<int> nums = { 2,3,5,4,3,2,6,7 };
    int a = 0;
    a = A.duplicateInArray(nums);
    cout << a;
	system("pause");
	return 0;
}