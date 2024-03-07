#include "pch.h"
#include "CppUnitTest.h"
#include "../OOPLab#1.4/IntVector.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestAddMethod)
        {
            // Arrange
            IntVector vector1(3);
            IntVector vector2(3);

            // Initialize vectors
            vector1[0] = 1; vector1[1] = 2; vector1[2] = 3;
            vector2[0] = 4; vector2[1] = 5; vector2[2] = 6;

            // Act
            vector1.Add(vector2);

            // Assert
            Assert::AreEqual(5, vector1[0]);
            Assert::AreEqual(7, vector1[1]);
            Assert::AreEqual(9, vector1[2]);
        }
    };
}
