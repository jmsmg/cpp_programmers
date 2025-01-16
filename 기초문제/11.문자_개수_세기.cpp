#include <string>
#include <vector>

using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer(52, 0);
	for (auto s : my_string)
    {
        if ('A' <= s && s <= 'Z')
            answer[s - 'A'] += 1;
        else
            answer[s - 'a' + 26] += 1;
    }
    return answer;
}