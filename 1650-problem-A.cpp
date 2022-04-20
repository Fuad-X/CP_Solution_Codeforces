#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    string s;
    while(t--)
    {
        cin >> s;
        char c;
        cin >> c;
        int l = s.length();

        int before = 0, flag = 1;

        for(int i=0; i<l; i++)
        {
            if(s[i] == c) 
            {
                if(before%2==0 && (l-before-1)%2==0)
                {
                    flag = 0;
                    cout << "YES\n";
                }
            }
            before++;
            if(!flag) break;
        }
        if(flag)cout << "NO\n";
    }

    return 0;
}
