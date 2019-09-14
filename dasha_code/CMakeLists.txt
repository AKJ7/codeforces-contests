set(CONTEST_NAME "Dasha code")
message(STATUS "${CONTEST_NAME} found")


package_add_test(dasha_code src/dasha_code.h tests/test.cpp ../tools/iotransceiver.h)