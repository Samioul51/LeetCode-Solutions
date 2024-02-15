/*

Link: https://leetcode.com/problems/find-first-palindromic-string-in-the-array/description/

*/


class Solution {
public:
string reverse(string& str)
{
    int n = str.length();
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);

    return str;
}
    string firstPalindrome(vector<string>& words) {
        int i;
        int c=-1;
        for(i=0;i<words.size();i++){
            string g=words[i];
            string h=reverse(words[i]);
            if(g==h){
                c=i;
                break;
            }
        }
        string n="";
        if(c==-1)
            return n;
        else
            return words[c];
    }
};