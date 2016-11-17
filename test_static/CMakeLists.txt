add_executable(linkedlist_static_test main.c)
INCLUDE_DIRECTORIES(../src)
LINK_DIRECTORIES(../src)
TARGET_LINK_LIBRARIES(linkedlist_static_test linkedlists)
