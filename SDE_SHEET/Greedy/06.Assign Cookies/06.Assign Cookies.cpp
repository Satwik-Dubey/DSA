class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());

        int child=0;
        int cookie=0;
        while(child < g.size() && cookie < s.size()){
            if(s[cookie]>=g[child]){
                child++;
            }
            cookie++; // means if s[cookie] < g[child] means If the cookie is too small, skip it → cookie++
        }

        return child; // bcz the no of child satisfied is the answer    
    }
};