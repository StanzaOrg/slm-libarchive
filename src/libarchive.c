#include <archive.h>
#include <archive_entry.h>
#include <stdlib.h>
#include <string.h>

#define GET_VAR(NAME) long get_ ## NAME (){return NAME;}
GET_VAR(ARCHIVE_VERSION_NUMBER)
GET_VAR(ARCHIVE_EOF)
GET_VAR(ARCHIVE_OK)
GET_VAR(ARCHIVE_RETRY)
GET_VAR(ARCHIVE_WARN)
GET_VAR(ARCHIVE_FAILED)
GET_VAR(ARCHIVE_FATAL)

#define GET_SVAR(NAME) char* get_ ## NAME (){return NAME;}
GET_SVAR(ARCHIVE_VERSION_ONLY_STRING)
GET_SVAR(ARCHIVE_VERSION_STRING)

/* TODO: all other defines from archive.h */
