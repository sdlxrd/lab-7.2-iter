#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\Misha\source\repos\lab 7.2 iter\lab 7.2 iter\lab 7.2 iter.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int k = 2;
			int n = 2;
			int** a = new int* [k];
			for (int i = 0; i < k; i++)
				a[i] = new int[n];
			a[0][0] = 1;
			a[0][1] = 3;
			a[1][0] = 4;
			a[1][1] = 6;
			MinMax(a, k, n);
			Assert::AreEqual(a[0][1], 1);
		}
	};
}
