#pragma once
#ifndef BE_BGLGEN_VERSION_HPP_
#define BE_BGLGEN_VERSION_HPP_

#include <be/core/macros.hpp>

#define BE_BGLGEN_VERSION_MAJOR 0
#define BE_BGLGEN_VERSION_MINOR 1
#define BE_BGLGEN_VERSION_REV 18

/*!! include('common/version', 'BE_BGLGEN', 'BGLgen') !! 6 */
/* ################# !! GENERATED CODE -- DO NOT MODIFY !! ################# */
#define BE_BGLGEN_VERSION (BE_BGLGEN_VERSION_MAJOR * 100000 + BE_BGLGEN_VERSION_MINOR * 1000 + BE_BGLGEN_VERSION_REV)
#define BE_BGLGEN_VERSION_STRING "BGLgen " BE_STRINGIFY(BE_BGLGEN_VERSION_MAJOR) "." BE_STRINGIFY(BE_BGLGEN_VERSION_MINOR) "." BE_STRINGIFY(BE_BGLGEN_VERSION_REV)

/* ######################### END OF GENERATED CODE ######################### */

#endif
