class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int l = 0, h = letters.size();
        while( l < h){
            int mid = (l + h) / 2;
            if(letters[mid] > target){
                h = mid;
            }else if(letters[mid] <= target ){
                l = mid + 1;
            }
        }
        return letters[l % letters.size()];
    }
};