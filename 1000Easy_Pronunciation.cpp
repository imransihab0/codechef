// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/EZSPEAK
// @handle: imransihab0

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

bool isCons(char &c)
{
    char hash[] = {'a', 'e', 'i', 'o', 'u'};
    for(int i=0; i<5; i++) if(hash[i] == c) return false;
    return true;
}

bool isEasy(string &s)
{
    int c = 0;
    for(int i=0; i<s.size(); i++)
    {
        if(isCons(s[i])) c++;
        else c = 0;
        if(c == 4) return false;
    }
    return true;
}

void solve()
{
    int n; cin >> n;
    string s; cin >> s;
    if(isEasy(s)) py;
    else pn;
}

int32_t main(){
    FastIO();
    
    int t; cin >> t;
    while(t--) solve();
    
return 0;
}