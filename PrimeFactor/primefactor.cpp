#include <iostream>
#include <vector>
using namespace std;

class PrimeFactor {
public:
	vector<int> of(int number)
	{
		vector<int> result = {};
		for (int devisor = 2; number > 1; devisor++)
		{
			while (number % devisor == 0)
			{
				result.push_back(devisor);
				number /= devisor;
			}
		}

		return result;
	}
};