add_executable(linkedlist main.c linkedlist.c linkedlist.h)

add_library(linkedlist STATIC linkedlist.c linkedlist.h)
add_library(linkedlist SHARED linkedlist.c linkedlist.h)