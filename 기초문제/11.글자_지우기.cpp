#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string my_string, vector<int> indices)
{
    string answer;

    sort(indices.begin(), indices.end());

    vector<int>::iterator it = indices.begin();

    for (int i = 0; i < my_string.size(); i++)
    {
        if (*it < i)
            it++;
        if (*it == i)
            continue;
        answer += my_string[i];
    }
    return answer;
}