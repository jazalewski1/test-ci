set(EXECUTABLE_OUTPUT_PATH ${EXECUTABLE_OUTPUT_PATH}/test)

set(
	TEST_NAME
	AddTests
)

add_executable(
	${TEST_NAME}
	src/${TEST_NAME}.cpp
)

target_link_libraries(
	${TEST_NAME}
	gtest
	gtest_main
	gmock
	Foo
)

add_test(NAME ${TEST_NAME} COMMAND ${TEST_NAME})