#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab33/Lab33.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double x = 4.2, y = 3.1;
			double expected = (pow(x, 2) + sin(x * y) + pow(y, 2)) / (1 + pow(x, 2) + pow(y, 2));
			double tolerancy = 0.00001;

			double result = h(x, y);

			Assert::AreEqual(result, expected, tolerancy);
		}
	};
}
