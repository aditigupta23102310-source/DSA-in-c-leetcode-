class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<char>arr(s.begin(), s.end());
        vector<char>arr1(t.begin(), t.end());

        sort(arr.begin(),arr.end());
        sort(arr1.begin(),arr1.end());

        if(arr.size() != arr1.size()) {
            return false;
        }
        else{

        for(int i = 0; i < arr.size(); i++) {
            if(arr[i] != arr1[i]) {
                return false;
            }
             
        }
        return true;

         
    }
    }
};