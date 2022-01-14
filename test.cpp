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

//3 additional test cases

TEST(EchoTest, Username) {
	char* test_val[2]; test_val[0] = "./c-echo"; test_val[1] = "username";
	EXPECT_EQ("username", echo(2,test_val));
}
TEST(EchoTest, Password) {
	char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "password"; test_val [2] = "123";
	EXPECT_EQ("password 123", echo(3,test_val));
}
TEST(EchoTest, TwoPlusTwo) {
	char* test_val[5]; test_val[0] = "./c-echo"; test_val[1] = "2"; test_val[2] = "plus"; test_val[3] = "2"; test_val[4] = "is 4";
	EXPECT_EQ("2 plus 2 is 4", echo(5,test_val));
}


//main
int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
