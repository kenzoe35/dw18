#include "dw.h"
#include <gtest/gtest.h>

TEST(Buffer, StoresAndRetrievesValues) {
  Buffer buffer(3);
  buffer.set_value(0, 10);
  buffer.set_value(1, 20);
  buffer.set_value(2, 30);
  EXPECT_EQ(buffer.get_value(0), 10);
  EXPECT_EQ(buffer.get_value(1), 20);
  EXPECT_EQ(buffer.get_value(2), 30);
}

TEST(Buffer, ReportsCorrectSize) {
  Buffer buffer(7);
  EXPECT_EQ(buffer.get_size(), 7);
}
