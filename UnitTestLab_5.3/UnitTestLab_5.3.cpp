#include "pch.h"
#include "CppUnitTest.h"
#include"../Lab_5.3/Source.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab53
{
	TEST_CLASS(UnitTestLab53)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double  j = 1, x = 0.9, R;
			R = x / (pow(4 * j, 2) - 2. * j);
			double g = 1 - R;
			Assert::IsTrue(g < 0.95);

		}
	};
}
