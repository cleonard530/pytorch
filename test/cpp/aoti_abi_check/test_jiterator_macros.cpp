#include <gtest/gtest.h>

#include <torch/headeronly/util/jiterator_macros.h>

jiterator_also_stringify_as(
    jiterator_code(template <typename T> T identity(T value) { return value; }),
    identity_string)

TEST(TestJiteratorMacros, DefinesCode) {
  EXPECT_EQ(identity(3), 3);
}
