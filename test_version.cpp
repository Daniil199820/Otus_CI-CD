#define BOOST_TEST_MODULE test_version

#include "lib.h"

#include <gtest/gtest.h>

TEST(Version_Test, up_zero) {
    // Arrange
    ASSERT_LE(version(),0);
}

