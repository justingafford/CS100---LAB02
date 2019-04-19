#include "c-echo.h"

#include "gtest/gtest.h"

TEST(EchoTest, HelloWorld) {
    char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "hello"; test_val[2] = "world";
    EXPECT_EQ("hello world", echo(3,test_val));
}

TEST(EchoTest, EmptyString) {
    char* test_val[1]; test_val[0] = "./c-echo";
    EXPECT_EQ("", echo(1,test_val));
}

TEST(EchoTest, HowAreYou) {
    char* test_val[4]; test_val[0] = "./c-echo"; test_val[1] = "how"; test_val[2] = "are"; test_val[3] = "you";
    EXPECT_EQ("how are you", echo(4,test_val));
}

TEST(EchoTest, Random) {
    char* test_val[2]; test_val[0] = "./c-echo"; test_val[1] = ".sd/s.d/";
    EXPECT_EQ(".sd/s.d/", echo(2,test_val));
}

TEST(EchoTest, HiHowAreYou) {
    char* test_val[5]; test_val[0] = "./c-echo"; test_val[1] = "hi,"; test_val[2] = "how"; test_val[3] = "are"; test_val[4] = "you?";
    EXPECT_EQ("hi, how are you?", echo(5,test_val));
}
	
int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
