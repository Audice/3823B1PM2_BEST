#include "acutest.h"
#include "seconds.h"


void test_year() {
    TEST_ASSERT(get_years(1) == 1970);
    TEST_ASSERT(get_years(54) == 1970);
    TEST_ASSERT(get_years(1096) == 1970);
    TEST_ASSERT(get_years(791609794) == 1994);
    TEST_ASSERT(get_years(489227446) == 1985);
    TEST_ASSERT(get_years(1155394748) == 2005);
}

void test_month() {
    TEST_ASSERT(get_month(1) == 0);
    TEST_ASSERT(get_month(54) == 0);
    TEST_ASSERT(get_month(1096) == 0);
    TEST_ASSERT(get_month(791609794) == 7);
    TEST_ASSERT(get_month(489227446) == 2);
    TEST_ASSERT(get_month(1155394748) == 11);
}

void test_day() {
    TEST_ASSERT(get_day(1) == 0);
    TEST_ASSERT(get_day(54) == 0);
    TEST_ASSERT(get_day(1096) == 0);
    TEST_ASSERT(get_day(791609794) == 17);
    TEST_ASSERT(get_day(489227446) == 20);
    TEST_ASSERT(get_day(1155394748) == 11);
}

void test_hours() {
    TEST_ASSERT(get_hours(1) == 0);
    TEST_ASSERT(get_hours(54) == 0);
    TEST_ASSERT(get_hours(1096) == 0);
    TEST_ASSERT(get_hours(791609794) == 3);
    TEST_ASSERT(get_hours(489227446) == 8);
    TEST_ASSERT(get_hours(1155394748) == 14);
}

void test_minutes() {
    TEST_ASSERT(get_minutes(1) == 0);
    TEST_ASSERT(get_minutes(54) == 0);
    TEST_ASSERT(get_minutes(1096) == 18);
    TEST_ASSERT(get_minutes(791609794) == 36);
    TEST_ASSERT(get_minutes(489227446) == 30);
    TEST_ASSERT(get_minutes(1155394748) == 59);
}

void test_seconds() {
    TEST_ASSERT(get_seconds(1) == 1);
    TEST_ASSERT(get_seconds(54) == 54);
    TEST_ASSERT(get_seconds(1096) == 16);
    TEST_ASSERT(get_seconds(791609794) == 34);
    TEST_ASSERT(get_seconds(489227446) == 46);
    TEST_ASSERT(get_seconds(1155394748) == 8);
}

void test_magical_value() {
    TEST_ASSERT(get_magical_value(1) == 970225);
    TEST_ASSERT(get_magical_value(54) == 1225);
    TEST_ASSERT(get_magical_value(1096) == 13261);
    TEST_ASSERT(get_magical_value(791609794) == 1455);
    TEST_ASSERT(get_magical_value(489227446) == 844);
    TEST_ASSERT(get_magical_value(1155394748) == 10004);
}

TEST_LIST = {
    {"year", test_year},
    {"month", test_month},
    {"day", test_day},
    {"hours", test_hours},
    {"minutes", test_minutes},
    {"seconds", test_seconds},
    {"magicial_value", test_magical_value},
    {NULL, NULL}
};
