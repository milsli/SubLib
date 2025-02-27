#ifndef SUBLIB_GLOBAL_H
#define SUBLIB_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(SUBLIB_LIBRARY)
#define SUBLIB_EXPORT Q_DECL_EXPORT
#else
#define SUBLIB_EXPORT Q_DECL_IMPORT
#endif

#endif // SUBLIB_GLOBAL_H
