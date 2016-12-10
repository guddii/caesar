/**
 *  @file caesar.test.cpp
 *  @brief Unit test for caesar en- and decryption.
 *
 *  @author Florian Gudat (guddii)
 *  @see https://github.com/google/googletest/tree/master/googletest/docs
 *  @see https://github.com/guddii/caesar
 *  @bug https://github.com/guddii/caesar/issues
 */

#include "../src/caesar.h"
#include "gtest/gtest.h"

/**
 * @brief Test character encryption
 *
 *  Test if capital and lower case letters
 *  will be moved by 3, unless the end of
 *  the alphabet is reached. In this case
 *  it should start from the beginning.
 *  Non alphanumeric characters should not
 *  be converted.
 */
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

/**
 * @brief Test string encryption
 */
TEST(stringEncryptTest, caesarTests) {
    std::string arr = "abc";
    std::string eq  = "def";
    EXPECT_EQ(eq, caesar::encrypt(arr));

}

/**
 * @brief Test character decryption
 *
 *  Test if capital and lower case letters
 *  will be moved by 3, unless the start of
 *  the alphabet is reached. In this case
 *  it should start from the end.
 *  Non alphanumeric characters should not
 *  be converted.
 */
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

/**
 * @brief Test string decryption
 */
TEST(stringDecryptTest, caesarTests) {
    std::string arr = "def";
    std::string eq  = "abc";
    EXPECT_EQ(eq, caesar::decrypt(arr));
}