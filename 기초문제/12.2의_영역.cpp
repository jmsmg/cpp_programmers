#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;

    int start = 0;
    int end = 0;

    int i = 0;
	while (i < arr.size())
    {
        if (arr[i] == 2)
        {
            start = i;
            end = i + 1;
            break;
        }
        i++;
    }

    if (i == arr.size())
        answer.push_back(-1);
    
    while (i < arr.size())
    {
        if (arr[i] == 2)
        {
            end = i + 1;
        }
        i++;
    }
	while (start < end)
    {
        answer.push_back(arr[start]);
        start++;
    }
    return answer;
}