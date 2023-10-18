#include "pch.h"
#include "CppUnitTest.h"
#include "../lab5.3.sophia/lab5.3.sophia.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double expected = (pow(cos(1.5), 2) - sin(1.5)) / exp(sin(1.5));
			double actual = p(1.5);
			Assert::AreEqual(expected, actual, 0.0001);
		}
		TEST_METHOD(TestFunctionH_LessThanOne) {
			// Приклад для x, менше одиниці.
			double expected = 0.760245;
			double actual = p(0.5); // Замість 0.5, вставте власні вхідні дані
			Assert::AreEqual(expected, actual, 0.0001);
		}
	};
}
