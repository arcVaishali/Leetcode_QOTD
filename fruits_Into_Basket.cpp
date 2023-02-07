class Solution {
public:
    int totalFruit(vector<int>& fruits) { 

        int n=fruits.size(); 
        map<int,int> mp;

        int left=0,right;
        for(right=0;right<n;right++){
            mp[fruits[right]]++;

            if(mp.size()>2){
                mp[fruits[left]]--;

                if(mp[fruits[left]]==0){
                    mp.erase(fruits[left]);
                } 
                left++;
            }
        } 

        return right-left; 

    }
};
        
        
        