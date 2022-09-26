#include <vector>
#include <unordered_set>
using namespace std;

int solution(vector<int> nums)
{
	unordered_set<int> mosters(nums.begin(), nums.end());
	int select = nums.size() / 2;
	int answer = select < mosters.size() ? select : mosters.size();
	return answer;
}

void main()
{
	//test
	//auto ret = solution({3,3,3,2,2,4});
}