add_executable(linkedlist_dynamic_test main.c)
INCLUDE_DIRECTORIES(../src)
LINK_DIRECTORIES(../src)
TARGET_LINK_LIBRARIES(linkedlist_dynamic_test linkedlistd)