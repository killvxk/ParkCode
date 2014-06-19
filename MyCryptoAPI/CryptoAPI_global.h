#ifndef CRYPTOAPI_GLOBAL_H
#define CRYPTOAPI_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(CRYPTOAPI_LIBRARY)
#  define CRYPTOAPISHARED_EXPORT Q_DECL_EXPORT
#else
#  define CRYPTOAPISHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // CRYPTOAPI_GLOBAL_H