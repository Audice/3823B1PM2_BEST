#include "acutest.h"
#include "deadline.h"


void test_deadline() {
    TEST_ASSERT(get_score(500, 10, 20, 0) == 500);
    TEST_ASSERT(get_score(500, 10, 20, 9) == 500);
    TEST_ASSERT(get_score(500, 10, 20, 10) == 500);
    TEST_ASSERT(get_score(500, 10, 20, 13) == 425);
    TEST_ASSERT(get_score(500, 10, 20, 17) == 325);
    TEST_ASSERT(get_score(500, 10, 20, 20) == 250);
    TEST_ASSERT(get_score(1342, 10, 109, 9) == 1342);
    TEST_ASSERT(get_score(1342, 10, 109, 10) == 1342);
    TEST_ASSERT(get_score(1342, 10, 109, 43) == 1119);
    TEST_ASSERT(get_score(1342, 10, 109, 55) == 1037);
    TEST_ASSERT(get_score(1342, 10, 109, 1550) == 671);
    TEST_ASSERT(get_score(1111, 4326, 5678, 4) == 1111);
    TEST_ASSERT(get_score(1111, 4326, 5678, 654) == 1111);
    TEST_ASSERT(get_score(1111, 4326, 5678, 4325) == 1111);
    TEST_ASSERT(get_score(1111, 4326, 5678, 4876) == 886);
    TEST_ASSERT(get_score(1111, 4326, 5678, 4991) == 838);
    TEST_ASSERT(get_score(1111, 4326, 5678, 5679) == 556);
}

TEST_LIST = {
    {"deadline", test_deadline},
    {NULL, NULL}
};
