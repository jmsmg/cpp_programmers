#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> intervals)
{
    vector<int> answer;

    int a = intervals[0][1] - intervals[0][0] + 1;
    int b = intervals[1][1] - intervals[1][0] + 1;

    int i = intervals[0][0];
    while (a--)
    {
 		answer.push_back(arr[i++]);
    }
    i = intervals[1][0];
	while (b--)
    {
 		answer.push_back(arr[i++]);
    }
    return answer;
}