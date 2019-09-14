//
// Created by hp on 9/14/19.
//

#include <gtest/gtest.h>
#include "../src/dasha_code.h"

using namespace dasha_code;


TEST(Dasha_code, works)
{
    uint8_t buffer1[6] = {10, 2, 3, 5, 5, 2};
    ASSERT_EQ(dasha(sizeof(buffer1), buffer1), 3);

    uint8_t buffer2[4] = {100, 100, 100, 100};
    ASSERT_EQ(dasha(sizeof(buffer2), buffer2), 1);

    uint8_t buffer3[8] = {7,6, 5, 4, 3, 2, 2, 3};
    ASSERT_EQ(dasha(sizeof(buffer3), buffer3), 4);
}