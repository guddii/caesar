#if !defined(CAESAR)
#define CAESAR

#include "locale"
#include "string"

namespace caesar {

    char encrypt(char letter);

    char encrypt(char letter) {

        if (isupper(letter)) {

            if (letter > 87) {

                letter = 64 + ( letter - 87);

            } else {

                letter = letter + 3;

            }



        } else if (islower(letter)) {

            if (letter > 119) {

                letter = 96 + ( letter - 119 );

            } else {

                letter = letter + 3;

            }

        }

        return letter;
    }

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

    char decrypt(char letter);

    char decrypt(char letter) {
        if (isupper(letter)) {

            if (letter < 68) {

                letter = 91 - ( 68 - letter);

            } else {

                letter = letter - 3;

            }



        } else if (islower(letter)) {

            if (letter < 100) {

                letter = 123 - ( 100 - letter);

            } else {

                letter = letter - 3;

            }

        }

        return letter;
    }

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
