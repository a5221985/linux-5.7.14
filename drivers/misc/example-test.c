#include <kunit/test.h>
#include "example.h"

/* Define the test cases. */

static void misc_example_add_test_basic(struct kunit *test)
{
    KUNIT_EXPECT_EQ(test, 1, misc_example_add(1, 0));
    KUNIT_EXPECT_EQ(test, 2, misc_example_add(1, 1));
    KUNIT_EXPECT_EQ(test, 0, misc_example_add(-1, 1));
    KUNIT_EXPECT_EQ(test, INT_MAX, misc_example_add(0, INT_MAX));
    KUNIT_EXPECT_EQ(test, -1, misc_example_add(INT_MAX, INT_MIN));
}

static struct kunit_case misc_example_test_cases[] = {
    KUNIT_CASE(misc_example_add_test_basic),
    {}
};

static struct kunit_suite misc_example_test_suite = {
    .name = "misc-example",
    .test_cases = misc_example_test_cases,
};

kunit_test_suite(misc_example_test_suite);
