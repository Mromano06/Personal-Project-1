#include "pch.h"
#include "CppUnitTest.h"

// Matthew Romano - November 1st, 2024

// unit tests for the player functions

extern "C" int playerDamaged(int, int);
extern "C" int playerHealed(int, int);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace PlayerFunctionTests
{
	TEST_CLASS(PlayerFunctionTests)
	{
	public:

		// playerDamaged tests 
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

		// playerHealed tests 
		TEST_METHOD(PlayerHp5_HealthGained5_Return10)	// tests a "regular heal"
		{
			int health = 5, heal = 5, actual = 0, expected = 10;
			actual = playerHealed(health, heal);
			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(PlayerHp1_HealthGainedN1_ReturnN1)	// tests if -1 is returned when heal amount is < 0
		{
			int health = 1, heal = -1, actual = 0, expected = -1;
			actual = playerHealed(health, heal);
			Assert::AreEqual(expected, actual);
		}
	};
}
