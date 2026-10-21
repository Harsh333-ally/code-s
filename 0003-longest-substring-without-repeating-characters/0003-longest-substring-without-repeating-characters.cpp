class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>map;
        int ans = 0;
        int i=0; 
        int j=0;
        while(j<s.size()){
            map[s[j]]++;
            if(map[s[j]]==2){
                while(i<j){
                    map[s[i]]--;
                    i++;
                    if(map[s[j]]==1){
                        ans = max(ans,j-i+1);
                        break;
                    }
                }
                ans = max(ans,j-i);
            }
            else{
                ans = max(ans,j-i+1);
            }
            j++;
        }
        return ans;
    }
};