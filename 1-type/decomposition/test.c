#include <math.h>
#include <stdbool.h>

#include "acutest.h"
#include "decomposition.h"


bool double_compare(double first, double second) {
    return fabs(first - second) < 1e-5;
}

void test_reverse() {
    TEST_ASSERT(reverse(1234) == 4321);
    TEST_ASSERT(reverse(3000) == 3);
    TEST_ASSERT(reverse(3254) == 4523);
    TEST_ASSERT(reverse(1010) == 101);
    TEST_ASSERT(reverse(5555) == 5555);
    TEST_ASSERT(reverse(9009) == 9009);
}

void test_decomposition() {
    TEST_ASSERT_(double_compare(decomposition(1234), 13.82488) == true, "decomposition(%d) == %f", 1234, 13.82488);
    TEST_ASSERT_(double_compare(decomposition(5555), 18.00180) == true, "decomposition(%d) == %f", 5555, 18.00180);
    TEST_ASSERT_(double_compare(decomposition(4322), 7.22565) == true, "decomposition(%d) == %f", 4322, 7.22565);
    TEST_ASSERT_(double_compare(decomposition(1111), 3.60036) == true, "decomposition(%d) == %f", 1111, 3.60036);
    TEST_ASSERT_(double_compare(decomposition(7391), 3.94248) == true, "decomposition(%d) == %f", 7391, 3.94248);
    TEST_ASSERT_(double_compare(decomposition(1779), 31.29268) == true, "decomposition(%d) == %f", 1779, 31.29268);
}

void test_append() {
    TEST_ASSERT(append(1000, 1, 5) == 110005);
    TEST_ASSERT(append(4444, -50, 5) == -5044445);
    TEST_ASSERT(append(4444, -77, 5) == -7744445);
    TEST_ASSERT(append(4323, 3, 1) == 343231);
    TEST_ASSERT(append(9111, 45, 9) == 4591119);
    TEST_ASSERT(append(4444, 1, 6) == 144446);
    TEST_ASSERT(append(4343, 4343, 0) == 434343430);
    TEST_ASSERT(append(3333, 3, 3) == 333333);
}

TEST_LIST = {
    {"reverse", test_reverse},
    {"decomposition", test_decomposition},
    {"append", test_append},
    {NULL, NULL}
};
