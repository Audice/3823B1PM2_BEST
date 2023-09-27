#include <stdbool.h>

#include "acutest.h"
#include "double.h"


void test_compare_double() {
    TEST_ASSERT(compare_double(1, 1) == true);
    TEST_ASSERT(compare_double(2.0, 2.0) == true);
    TEST_ASSERT(compare_double(3.0000, 3) == true);
    TEST_ASSERT(compare_double(2.000000001, 2) == true);
    TEST_ASSERT(compare_double(2.010101, 2.01010100001) == true);
    TEST_ASSERT(compare_double(-43.1, -43.10000000001) == true);
    TEST_ASSERT(compare_double(2, 2.5) == false);
    TEST_ASSERT(compare_double(2, 2.01) == false);
    TEST_ASSERT(compare_double(.0, 10000) == false);
    TEST_ASSERT(compare_double(3, 17) == false);
    TEST_ASSERT(compare_double(-4.05, -4.0505) == false);
}

void test_nearest_int() {
    TEST_ASSERT(get_nearest_int(1.3) == 1);
    TEST_ASSERT(get_nearest_int(1.99) == 2);
    TEST_ASSERT(get_nearest_int(1.499) == 1);
    TEST_ASSERT(get_nearest_int(5.6) == 6);
    TEST_ASSERT(get_nearest_int(5.001) == 5);
    TEST_ASSERT(get_nearest_int(14531.43333) == 14531);
    TEST_ASSERT(get_nearest_int(-5.001) == -5);
    TEST_ASSERT(get_nearest_int(-51.496) == -51);
}

void test_fractional() {
    TEST_ASSERT(compare_double(get_fractional(0.5), .5));
    TEST_ASSERT(compare_double(get_fractional(43.666), .666));
    TEST_ASSERT(compare_double(get_fractional(1.12), .12));
    TEST_ASSERT(compare_double(get_fractional(7.4), .4));
    TEST_ASSERT(compare_double(get_fractional(9.9), .9));
    TEST_ASSERT(compare_double(get_fractional(-7.332462), .667538));
    TEST_ASSERT(compare_double(get_fractional(-1.1111), .8889));
}

TEST_LIST = {
    {"compare_double", test_compare_double},
    {"nearest_int", test_nearest_int},
    {"fractional", test_fractional},
    {NULL, NULL}
};
