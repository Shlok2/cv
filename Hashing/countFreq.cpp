#include <iostream>
#include <string.h>
#include <vector>
#include <map>
#include <unordered_map>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    // For making vector of a particular size -> "()" are used, not "[]".
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    unordered_map<int, int> freq;

    // freq[a[i]]++ -> will increase 'value' when 'key' (element{ a[i] }) is found.
    for (int i = 0; i < n; i++)
    {
        freq[a[i]]++;
    }

    unordered_map<int, int>::iterator it;
    for (it = freq.begin(); it != freq.end(); it++)
    {
        cout << (*it).first << " " << (*it).second << endl;
    }

    return 0;
}
