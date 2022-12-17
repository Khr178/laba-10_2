#include "pch.h"
#include "CppUnitTest.h"
#include "../лаба 10.2/лаба 10.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace юніттест102
{
	TEST_CLASS(юніттест102)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int x;
			x = main();
			Assert::AreEqual(x, 0);
		}
	};
}
