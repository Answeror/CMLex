# Just include CML_INCLUDE_DIRS.

if(CMLex_DIR)
    set(CMLEX_INSTALL_DIR "${CMLex_DIR}")
else()
    message(FATAL_ERROR "Can't find a CMLEX installation.")
endif()

set(CMLEX_INCLUDE_DIRS "${CMLEX_INSTALL_DIR}")
