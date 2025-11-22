#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "postNetFunctions.h"

using namespace std;

// ------------------- TESTS GO HERE -------------------

TEST_CASE("encodeDigit basic tests") {
    CHECK(encodeDigit('1') == "0011" );
    CHECK( encodeDigit)
}