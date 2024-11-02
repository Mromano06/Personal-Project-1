#include "pch.h"
#include "CppUnitTest.h"

extern "C" int playerDamaged(int, int);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace PlayerFunctionTests
{
	TEST_CLASS(PlayerFunctionTests)
	{
	public:
		
		TEST_METHOD(PlayerHp10_DamageDone5_Retrun5)		// tests a "regular attack"
		{
			int health = 10, damage = 5, actual = 0, expected = 5;
			actual = playerDamaged(health, damage);
			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(PlayerHp1_DamageDone10_ReturnN1)	// tests if -1 is returned when playerHealth <= 0
		{
			int health = 1, damage = 10, actual = 0, expected = -1;
			actual = playerDamaged(health, damage);
			Assert::AreEqual(expected, actual);
		}
	};
}
