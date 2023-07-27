#include <string>;
using namespace std;
class Solution
{
public:
    string mergeAlternately(string word1, string word2)
    {

        int i = word1.length(), j = word2.length(), n = i + j;
        int a = 0, b = 0, k = 0;

        string s = "";

        while (k < n)
        {

            if (a < i && k < n)
            {
                s += word1[a++];
                k++;
            }
            if (b < j && k < n)
            {
                s += word2[b++];
                k++;
            }
        }
        return s;
    }
};