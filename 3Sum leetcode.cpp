class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {
       int n = arr.size();
       sort(arr.begin(),arr.end());
       vector<vector<int>>ans;
       int i =0;
      while(i<(n-2)){
           if(i==0 ||(i>0 && (arr[i]!=arr[i-1]))){
           int l =i+1;
           int r = n-1;
           while(l<r){
               if((arr[i]+arr[l]+arr[r])==0){
                 vector<int>result;
                 result.push_back(arr[i]);
                 result.push_back(arr[l]);
                 result.push_back(arr[r]);
                  ans.push_back(result);
                 while(l<r && arr[l] ==arr[l+1])l++;
                    while(l<r && arr[r]==arr[r-1])r--;
l++;
r--;
               }
               else if((arr[i]+arr[l]+arr[r])<0)
               l++;
               else
               r--;
           }
           }
           i++;
       }
       
       return ans;
    }
};
