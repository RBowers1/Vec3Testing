
#include "Vec3.h"
#include <gtest/gtest.h>
using namespace ::testing;
// for more details on gtest see here https://github.com/google/googletest/blob/master/googletest/docs/primer.md
// my lecture https://nccastaff.bournemouth.ac.uk/jmacey/PP/slides/testing/slides.html#/
TEST(Vec3, testDefaultConstructor)
{
    //make a new vec3 set x,y,z to 0
    Vec3 a;
    ASSERT_FLOAT_EQ(a.m_x, 0.0f);
    ASSERT_FLOAT_EQ(a.m_y, 0.0f);
    ASSERT_FLOAT_EQ(a.m_z, 0.0f);
}

TEST(Vec3, userDefinedConstructor)
{
    Vec3 a(1.0f,2.0f,3.0f);
    ASSERT_FLOAT_EQ(a.m_x, 1.0f);
    ASSERT_FLOAT_EQ(a.m_y, 2.0f);
    ASSERT_FLOAT_EQ(a.m_z, 3.0f);
}

TEST(Vec3, set)
{
    Vec3 a;
    a.set(1.0f,2.0f,3.0f);
    ASSERT_FLOAT_EQ(a.m_x, 1.0f);
    ASSERT_FLOAT_EQ(a.m_y, 2.0f);
    ASSERT_FLOAT_EQ(a.m_z, 3.0f);
}
