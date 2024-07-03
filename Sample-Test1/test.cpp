#include "pch.h"
#include "../PrimeFactor/primefactor.cpp"

using namespace std;

TEST(PrimeFactors, Of1) {
	PrimeFactor prime_factor;
	vector<int> expected = {};
	EXPECT_EQ(expected, prime_factor.of1(1));
}