#include "../src/caesar.h"
#include "gtest/gtest.h"
#include "string"

TEST(charEncryptTest, caesarTests) {
    EXPECT_EQ('D', caesar::encrypt('A'));
    EXPECT_EQ('Z', caesar::encrypt('W'));
    EXPECT_EQ('A', caesar::encrypt('X'));
    EXPECT_EQ('B', caesar::encrypt('Y'));
    EXPECT_EQ('C', caesar::encrypt('Z'));
    EXPECT_EQ('d', caesar::encrypt('a'));
    EXPECT_EQ('z', caesar::encrypt('w'));
    EXPECT_EQ('a', caesar::encrypt('x'));
    EXPECT_EQ('b', caesar::encrypt('y'));
    EXPECT_EQ('c', caesar::encrypt('z'));
    EXPECT_EQ('+', caesar::encrypt('+'));
}

TEST(stringEncryptTest, caesarTests) {
    std::string arr = "abc";
    std::string eq  = "def";
    EXPECT_EQ(eq, caesar::encrypt(arr));

}

TEST(charDecryptTest, caesarTests) {
    EXPECT_EQ('A', caesar::decrypt('D'));
    EXPECT_EQ('Z', caesar::decrypt('C'));
    EXPECT_EQ('Y', caesar::decrypt('B'));
    EXPECT_EQ('X', caesar::decrypt('A'));
    EXPECT_EQ('W', caesar::decrypt('Z'));
    EXPECT_EQ('a', caesar::decrypt('d'));
    EXPECT_EQ('z', caesar::decrypt('c'));
    EXPECT_EQ('y', caesar::decrypt('b'));
    EXPECT_EQ('x', caesar::decrypt('a'));
    EXPECT_EQ('w', caesar::decrypt('z'));
    EXPECT_EQ('+', caesar::encrypt('+'));
}

TEST(stringDecryptTest, caesarTests) {
    std::string arr = "def";
    std::string eq  = "abc";
    EXPECT_EQ(eq, caesar::decrypt(arr));
}