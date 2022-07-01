// pch.h: This is a precompiled header file.
// Files listed below are compiled only once, improving build performance for future builds.
// This also affects IntelliSense performance, including code completion and many code browsing features.
// However, files listed here are ALL re-compiled if any one of them is updated between builds.
// Do not add files here that you will be updating frequently as this negates the performance advantage.

#ifndef PCH_H
#define PCH_H

#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
// Windows Header Files
#include <windows.h>

// C/C++ libraries
#include <memory>

// Basis Universal header files
#include <basisu_comp.h>
#include <basisu_enc.h>
#include <basisu_transcoder.h>
#include <fmt/format.h>

#endif //PCH_H