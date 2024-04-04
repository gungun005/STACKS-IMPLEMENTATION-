#include<bits/stdc++.h>
#include<limits.h>
using namespace std;
int minstack(vector<int>&nums)
{
stack<pair<int,int>>st;
int mini=INT_MAX;
for(int i=0;i<nums.size();i++)
{
mini=min(mini,nums[i]);
st.push({nums[i],mini});
}
return st.top().second;
}
