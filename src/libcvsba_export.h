#ifndef LIBCVSBA_EXPORT_H
#define LIBCVSBA_EXPORT_H


#if defined(_MSC_VER) || defined(__CYGWIN__) || defined(__MINGW32__) || defined( __BCPLUSPLUS__) || defined( __MWERKS__)
#   ifdef LIBCVSBA_STATIC_DEFINE
#       define LIBCVSBA_EXPORT
#       define LIBCVSBA_NO_EXPORT
#   else
#       ifndef LIBCVSBA_EXPORT
#           ifdef LIBCVSBA_EXPORTS
                /* We are building this library */
#               define LIBCVSBA_EXPORT __declspec(dllexport)
#           else
                /* We are using this library */
#               define LIBCVSBA_EXPORT __declspec(dllimport)
#           endif
#       endif

#       ifndef LIBCVSBA_NO_EXPORT
#           define LIBCVSBA_NO_EXPORT
#       endif
#   endif
#else
#   define LIBCVSBA_EXPORT
#   define LIBCVSBA_NO_EXPORT
#endif

#endif
