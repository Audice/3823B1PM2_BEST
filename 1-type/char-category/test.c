#include <ctype.h>
#include <stdbool.h>

#include "acutest.h"
#include "char-category.h"


int test_function(bool (*custom_function)(char), int (*ctype_function)(int), char input) {
    int actually = (*custom_function)(input);
    int expected = (*ctype_function)(input);
    return (expected && actually) || (expected == 0 && actually == 0);
}


void test_chars() {
    for (int i = 0; i < 128; ++i) {
        TEST_ASSERT_(test_function(is_digit, isdigit, i), "is_digit(\"%c\") return incorrect", i);
        TEST_ASSERT_(test_function(is_letter, isalpha, i), "is_letter(\"%c\") return incorrect", i);
        TEST_ASSERT_(test_function(is_punctuation, ispunct, i), "is_punctuation(\"%c\") return incorrect", i);
    }
}

void test_ascii_code() {
    TEST_ASSERT(get_ascii_code('a', 'b', 'c') == 97098099);
    TEST_ASSERT(get_ascii_code('o', 'p', 'Q') == 111112081);
    TEST_ASSERT(get_ascii_code('\t', '\n', 'A') == 9010065);
    TEST_ASSERT(get_ascii_code('b', '5', '4') == 98053052);
    TEST_ASSERT(get_ascii_code('0', '1', '?') == 48049063);
    TEST_ASSERT(get_ascii_code('s', 'S', '`') == 115083096);
}


TEST_LIST = {
    {"char_test", test_chars},
    {"ascii_code", test_ascii_code},
    {NULL, NULL}
};
