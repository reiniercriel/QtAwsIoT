#pragma once

#include <QtCore/QtGlobal>

#ifdef BUILD_SHARED_LIBS
#  if defined(QTAWSIOT_LIBRARY_BUILD)
#    define QTAWSIOT_EXPORT Q_DECL_EXPORT
#    ifdef PRIVATE_TESTS_ENABLED
#      define QTAWSIOT_AUTOTEST_EXPORT Q_DECL_EXPORT
#    else
#      define QTAWSIOT_AUTOTEST_EXPORT
#    endif
#  else
#    define QTAWSIOT_EXPORT Q_DECL_IMPORT
#    ifdef PRIVATE_TESTS_ENABLED
#      define QTAWSIOT_AUTOTEST_EXPORT Q_DECL_IMPORT
#    else
#      define QTAWSIOT_AUTOTEST_EXPORT
#    endif
#  endif
#else
#  define QTAWSIOT_EXPORT
#  define QTAWSIOT_AUTOTEST_EXPORT
#endif
