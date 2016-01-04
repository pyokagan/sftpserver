/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* Define if building universal (internal helper macro) */
/* #undef AC_APPLE_UNIVERSAL_BUILD */

/* define to enable daemon mode */
/* #undef DAEMON */

/* Define to 1 if you have the `daemon' function. */
#define HAVE_DAEMON 1

/* Define to 1 if you have the declaration of `be64toh', and to 0 if you
   don't. */
#define HAVE_DECL_BE64TOH 0

/* Define to 1 if you have the declaration of `htobe64', and to 0 if you
   don't. */
#define HAVE_DECL_HTOBE64 1

/* Define to 1 if you have the <endian.h> header file. */
#define HAVE_ENDIAN_H 1

/* Define to 1 if you have the `futimes' function. */
/* #undef HAVE_FUTIMES */

/* Define to 1 if you have the `futimesat' function. */
/* #undef HAVE_FUTIMESAT */

/* Define to 1 if you have the `getaddrinfo' function. */
#define HAVE_GETADDRINFO 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the `iconv' library (-liconv). */
/* #undef HAVE_LIBICONV */

/* Define to 1 if you have the `pthread' library (-lpthread). */
/* #undef HAVE_LIBPTHREAD */

/* Define to 1 if you have the `socket' library (-lsocket). */
/* #undef HAVE_LIBSOCKET */

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the `prctl' function. */
#define HAVE_PRCTL 1

/* define if you have a readline library */
/* #undef HAVE_READLINE */

/* define if you have SIZE_MAX */
#define HAVE_SIZE_MAX 1

/* define if struct stat uses struct timespec */
/* #undef HAVE_STAT_TIMESPEC */

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/prctl.h> header file. */
#define HAVE_SYS_PRCTL_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Name of package */
#define PACKAGE "sftpserver"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "richard+sftpserver@sfere.greenend.org.uk"

/* Define to the full name of this package. */
#define PACKAGE_NAME "sftpserver"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "sftpserver 0.2.1"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "sftpserver"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "0.2.1"

/* define to reverse SSH_FXP_SYMLINK args */
/* #undef REVERSE_SYMLINK */

/* The size of `size_t', as computed by sizeof. */
#define SIZEOF_SIZE_T 4

/* The size of `unsigned int', as computed by sizeof. */
#define SIZEOF_UNSIGNED_INT 4

/* The size of `unsigned long', as computed by sizeof. */
#define SIZEOF_UNSIGNED_LONG 4

/* The size of `unsigned long long', as computed by sizeof. */
#define SIZEOF_UNSIGNED_LONG_LONG 8

/* The size of `unsigned short', as computed by sizeof. */
#define SIZEOF_UNSIGNED_SHORT 2

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Version number of package */
#define VERSION "0.2.1"

/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */
#if defined AC_APPLE_UNIVERSAL_BUILD
# if defined __BIG_ENDIAN__
#  define WORDS_BIGENDIAN 1
# endif
#else
# ifndef WORDS_BIGENDIAN
/* #  undef WORDS_BIGENDIAN */
# endif
#endif

/* Enable large inode numbers on Mac OS X 10.5.  */
#ifndef _DARWIN_USE_64_BIT_INODE
# define _DARWIN_USE_64_BIT_INODE 1
#endif

/* Number of bits in a file offset, on hosts where this is settable. */
/* #undef _FILE_OFFSET_BITS */

/* required for e.g. strsignal */
#define _GNU_SOURCE 1

/* Define for large files, on AIX-style hosts. */
/* #undef _LARGE_FILES */

/* define for re-entrant functions */
#define _REENTRANT 1

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif

#if ! HAVE_SIZE_MAX
# if SIZEOF_SIZE_T == SIZEOF_UNSIGNED_SHORT
#  define SIZE_MAX USHRT_MAX
# elif SIZEOF_SIZE_T == SIZEOF_UNSIGNED_INT
#  define SIZE_MAX UINT_MAX
# elif SIZEOF_SIZE_T == SIZEOF_UNSIGNED_LONG
#  define SIZE_MAX ULONG_MAX
# elif SIZEOF_SIZE_T == SIZEOF_UNSIGNED_LONG_LONG
#  define SIZE_MAX ULLONG_MAX
# else
#  error Cannot deduce SIZE_MAX
# endif
#endif
  

#ifdef __GNUC__
# define attribute(x) __attribute__(x)
#else
# define attribute(x)
#endif
