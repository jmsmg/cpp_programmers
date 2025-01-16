#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr, int idx) {

    for (int i = 0; i + idx < arr.size(); i++)
    {
        if (arr[i + idx] == 1)
            return (i + idx);
    }
    return -1;
}