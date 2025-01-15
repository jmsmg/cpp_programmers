#include <string>
#include <vector>
#include <cstring>
using namespace std;

vector<int> solution(vector<string> intStrs, int k, int s, int l) {
    vector<int> answer;

    for (auto str : intStrs)
    {
        string tmp = str.substr(s, l);
        if (k < stoi(tmp))
            answer.push_back(stoi(tmp));
    }
    return answer;
}