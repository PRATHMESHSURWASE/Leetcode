class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        map<int,int>mpp;
        for (int i = 0; i + k <= nums.size(); i++) {

    set<int> s;

    for (int j = i; j < i + k; j++) {
        s.insert(nums[j]);
    }

    for (int x : s) {
        mpp[x]++;
    }
}
int ans =-1;
for (auto it : mpp) {
    if (it.second == 1) {
        ans = it.first;
    }
}
return ans;
    }
};