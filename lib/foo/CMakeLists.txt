set(
	HEADERS
	include/foo/Add.hpp
)

set(
	SOURCES
	src/Add.cpp
)

add_library(
	Foo
	${HEADERS}
	${SOURCES}
)

target_include_directories(
	Foo
	PUBLIC "include"
)