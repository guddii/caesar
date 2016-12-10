/**
 *  @file caesar.h
 *  @brief Function prototypes for caesar en- and decryption.
 *
 *  This contains the prototypes for caesar en- and
 *  decryption of single characters as well as strings.
 *
 *  @author Florian Gudat (guddii)
 *  @see https://github.com/guddii/caesar
 *  @bug https://github.com/guddii/caesar/issues
 */

#if !defined(CAESAR)
#define CAESAR

#include "locale"
#include "string"

/**
 * @namespace caesar
 * Prevention of scoping issues.
 */
namespace caesar {

    /**
     *  @brief Encrypt a single letter
     *
     *  Encrypt a alphanumeric character,
     *  eighter upper or lower case, with the
     *  caesar encryption pattern.
     *
     *  @param letter - character for encryption
     *  @return Encrypted character
     */
    char encrypt(char letter);

    char encrypt(char letter) {
        if (isupper(letter)) {
            if (letter > 87) {
                letter = 64 + (letter - 87);
            } else {
                letter = letter + 3;
            }
        } else if (islower(letter)) {
            if (letter > 119) {
                letter = 96 + (letter - 119);
            } else {
                letter = letter + 3;
            }
        }
        return letter;
    }

    /**
     *  @brief Encrypt a full string
     *
     *  Encrypt alphanumeric characters from a
     *  string, with the caesar encryption pattern.
     *
     *  @param text - string for encryption
     *  @return Encrypted string
     */
    std::string encrypt(std::string text);

    std::string encrypt(std::string text) {
        std::string encryption;
        for (int i = 0; i < text.length(); i++) {
            char letter = text[i];
            letter = encrypt(letter);
            encryption += letter;
        }
        return encryption;
    }

    /**
     *  @brief Decrypt a single letter
     *
     *  Decrypt a alphanumeric character,
     *  eighter upper or lower case, with the
     *  caesar decryption pattern.
     *
     *  @param letter - character for decryption
     *  @return Decrypted character
     */
    char decrypt(char letter);

    char decrypt(char letter) {
        if (isupper(letter)) {
            if (letter < 68) {
                letter = 91 - (68 - letter);
            } else {
                letter = letter - 3;
            }
        } else if (islower(letter)) {
            if (letter < 100) {
                letter = 123 - (100 - letter);
            } else {
                letter = letter - 3;
            }
        }
        return letter;
    }

    /**
     *  @brief Decrypt a full string
     *
     *  Decrypt alphanumeric characters from a
     *  string, with the caesar decryption pattern.
     *
     *  @param text - string for decryption
     *  @return Decrypted string
     */
    std::string decrypt(std::string text);

    std::string decrypt(std::string text) {
        std::string decryption;
        for (int i = 0; i < text.length(); i++) {
            char letter = text[i];
            letter = decrypt(letter);
            decryption += letter;
        }
        return decryption;
    }

}

#endif
