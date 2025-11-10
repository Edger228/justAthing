/* necessary preprocessor flags */

#ifndef CONFIG_H
#define CONFIG_H

/* basic Windows configuration */
#define _WIN32 1
#define _CRT_SECURE_NO_WARNINGS 1

/* ver. info */
#define PACKAGE_VERSION "1.5.0"

/* standard headers */
#define HAVE_STDINT_H 1
#define HAVE_STDLIB_H 1
#define HAVE_STRING_H 1
#define HAVE_MEMORY_H 1
#define HAVE_INTTYPES_H 1

/* funcs */
#define HAVE_STRDUP 1
#define HAVE_VSNPRINTF 1

/* disable assembly */
#define FLAC__NO_ASM 1

#endif /* CONFIG_H */