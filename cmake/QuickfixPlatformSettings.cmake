find_file (FOUND_ALLOCATOR_HDR NAMES Allocator.h PATHS ${PROJECT_SOURCE_DIR}/src/quickfix/ NO_DEFAULT_PATH)
if (NOT FOUND_ALLOCATOR_HDR)
message("-- Generating empty Allocator.h")
file(WRITE ${PROJECT_SOURCE_DIR}/src/quickfix/Allocator.h
     "/* Empty file generated by cmake, can be replaced by a custom file */\n"
 )
endif()

find_file (FOUND_CONFIG_HDR NAMES config.h PATHS ${PROJECT_SOURCE_DIR} NO_DEFAULT_PATH)
if (NOT FOUND_CONFIG_HDR)
message("-- Generating empty config.h")
file(WRITE ${PROJECT_SOURCE_DIR}/config.h
     "/* Empty file generated by cmake, can be replaced by a custom file */\n" )
endif()



include(CheckIncludeFiles)
include(CheckFunctionExists)
include(CheckPrototypeDefinition)
include(CheckIncludeFileCXX)
include(CheckCXXSourceCompiles)
include(CheckSymbolExists)

unset(HAVE_DLFCN_H CACHE)
CHECK_INCLUDE_FILES(dlfcn.h HAVE_DLFCN_H)
unset(HAVE_INTTYPES_H CACHE)
CHECK_INCLUDE_FILES(inttypes.h HAVE_INTTYPES_H)
unset(HAVE_STDINT_H CACHE)
CHECK_INCLUDE_FILES(stdint.h HAVE_STDINT_H)
unset(HAVE_STDIO_H CACHE)
CHECK_INCLUDE_FILES(stdio.h HAVE_STDIO_H)
unset(HAVE_STDLIB_H CACHE)
CHECK_INCLUDE_FILES(stdlib.h HAVE_STDLIB_H)
unset(HAVE_STRINGS_H CACHE)
CHECK_INCLUDE_FILES(strings.h HAVE_STRINGS_H)
unset(HAVE_STRING_H CACHE)
CHECK_INCLUDE_FILES(string.h HAVE_STRING_H)
unset(HAVE_SYS_STAT_H CACHE)
CHECK_INCLUDE_FILES(sys/stat.h HAVE_SYS_STAT_H)
unset(HAVE_SYS_TYPES_H CACHE)
CHECK_INCLUDE_FILES(sys/types.h HAVE_SYS_TYPES_H)
unset(HAVE_UNISTD_H CACHE)
CHECK_INCLUDE_FILES(unistd.h HAVE_UNISTD_H)

unset(HAVE_GETTIMEOFDAY CACHE)
CHECK_SYMBOL_EXISTS(gettimeofday sys/time.h HAVE_GETTIMEOFDAY)

#https://github.com/transmission/libevent/blob/master/CMakeLists.txt
unset(HAVE_GETHOSTBYNAME_R CACHE)
unset(HAVE_GETHOSTBYNAME_R_3_ARG CACHE)
unset(HAVE_GETHOSTBYNAME_R_5_ARG CACHE)
unset(HAVE_GETHOSTBYNAME_R_6_ARG CACHE)
CHECK_FUNCTION_EXISTS(gethostbyname_r HAVE_GETHOSTBYNAME_R)
if (HAVE_GETHOSTBYNAME_R)
    CHECK_PROTOTYPE_DEFINITION(gethostbyname_r
        "int gethostbyname_r(const char *name, struct hostent *hp, struct hostent_data *hdata)"
        "0"
        "netdb.h"
        HAVE_GETHOSTBYNAME_R_3_ARG)

    CHECK_PROTOTYPE_DEFINITION(gethostbyname_r
        "struct hostent *gethostbyname_r(const char *name, struct hostent *hp, char *buf, size_t buflen, int *herr)"
        "NULL"
        "netdb.h"
        HAVE_GETHOSTBYNAME_R_5_ARG)

    CHECK_PROTOTYPE_DEFINITION(gethostbyname_r
        "int gethostbyname_r(const char *name, struct hostent *hp, char *buf, size_t buflen, struct hostent **result, int *herr)"
        "0"
        "netdb.h"
        HAVE_GETHOSTBYNAME_R_6_ARG)

    if (HAVE_GETHOSTBYNAME_R_5_ARG)
      add_definitions("-DGETHOSTBYNAME_R_RETURNS_RESULT=1")
    endif()

    if (HAVE_GETHOSTBYNAME_R_6_ARG)
      add_definitions("-DGETHOSTBYNAME_R_INPUTS_RESULT=1")
    endif()
endif()
