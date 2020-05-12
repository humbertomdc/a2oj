/********   All Required Header Files   ********/
#include <bits/stdc++.h>
/********   For Loops   ********/
#define rep(i,n) for(int i=0;i<(n);i++)
/********   Using   ********/
using namespace std;
/********   Type Defs   ********/
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;
/********   Init   ********/
void c_p_c()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
/***********************************************************/
/************************   Start   ************************/
/***********************************************************/

int main()
{
    c_p_c();
    string word;
    cin >> word;
    string res = "";
    set<char> vowels {'a', 'e', 'i', 'o', 'u', 'y'};
    for (char c : word) {
        c = tolower(c);
        if (vowels.find(c) != vowels.end()) continue;
        res += '.';
        res += c;
    }
    cout << res << endl;
    return 0;
}