bool isPalindromePartial(int l, int r, string &s)
{
    if(l>=r) return true;
    if(s[l]!=s[r]) return false;
    
    return isPalindromePartial(l+1,r-1,s);
}
bool isPalindrome(string &s)
{
	return isPalindromePartial(0,s.size()-1, s);
}
