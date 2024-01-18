/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/*
 * Copyright (C) 2020, Northwestern University and Argonne National Laboratory
 * See COPYRIGHT notice in top-level directory.
 */


#ifndef _CONFIG_H
#define _CONFIG_H

/* Enable debug mode */
/* #undef E3SM_IO_DEBUG */

/* Enable internal time profiling */
/* #undef E3SM_IO_PROFILING */

/* Enable option to initialize MPI with multi-thread support */
/* #undef E3SM_IO_THREADING */

/* Enable ADIOS I/O method */
/* #undef ENABLE_ADIOS2 */

/* Enable HDF5 I/O method */
#define ENABLE_HDF5 1

/* Enable HDF5 Log VOL I/O method */
/* #undef ENABLE_LOGVOL */

/* Enable NetCDF 4 I/O method */
/* #undef ENABLE_NETCDF4 */

/* Enable PnetCDF I/O method */
/* #undef ENABLE_PNC */

/* Define to 1 if you have the `access' function. */
#define HAVE_ACCESS 1

/* Define to 1 if the system has the type `adios2_varinfo'. */
/* #undef HAVE_ADIOS2_VARINFO */

/* define if the compiler supports basic C++11 syntax */
#define HAVE_CXX11 1

/* define if the compiler supports basic C++17 syntax */
#define HAVE_CXX17 1

/* Define to 1 if you have the declaration of `H5Pget_subfiling(hid_t, int*)',
   and to 0 if you don't. */
/* #undef HAVE_DECL_H5PGET_SUBFILING */

/* Define to 1 if you have the declaration of `H5S_BLOCK', and to 0 if you
   don't. */
#define HAVE_DECL_H5S_BLOCK 1

/* Define to 1 if you have the declaration of `NC_NODIMSCALE_ATTACH', and to 0
   if you don't. */
/* #undef HAVE_DECL_NC_NODIMSCALE_ATTACH */

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you have the <filesystem> header file. */
/* #undef HAVE_FILESYSTEM */

/* Define to 1 if you have the <fts.h> header file. */
#define HAVE_FTS_H 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the <netcdf.h> header file. */
/* #undef HAVE_NETCDF_H */

/* Define to 1 if you have the <netcdf_meta.h> header file. */
/* #undef HAVE_NETCDF_META_H */

/* Define to 1 if you have the <netcdf_par.h> header file. */
/* #undef HAVE_NETCDF_PAR_H */

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdio.h> header file. */
#define HAVE_STDIO_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the `unlink' function. */
#define HAVE_UNLINK 1

/* Whether HDF5 defines H5S_BLOCK */
#define HDF5_HAVE_H5SBLOCK 1

/* HDF5 has multi-dataset I/O support */
#define HDF5_HAVE_MULTI_DATASET_API 1

/* Whether HDF5 defines H5Pset_selection_io */
/* #undef HDF5_HAVE_SELECTION_IO */

/* whether logvol version is 1.4.0 or later */
/* #undef LOGVOL_GE_1004000 */

/* Whether log-based VOL can set the number of subfiles */
/* #undef LOGVOL_HAVE_GET_NSUBFILES */

/* Whether log-based VOL have H5Pset_buffered */
/* #undef LOGVOL_HAVE_H5PSET_BUFFERED */

/* Define to the sub-directory where libtool stores uninstalled libraries. */
#define LT_OBJDIR ".libs/"

/* Name of package */
#define PACKAGE "e3sm_io"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT ""

/* Define to the full name of this package. */
#define PACKAGE_NAME "e3sm_io"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "e3sm_io 1.3.0"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "e3sm_io"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "1.3.0"

/* Define to 1 if the `S_IS*' macros in <sys/stat.h> do not work properly. */
/* #undef STAT_MACROS_BROKEN */

/* Define to 1 if all of the C90 standard headers exist (not just the ones
   required in a freestanding environment). This macro is provided for
   backward compatibility; new code need not use it. */
#define STDC_HEADERS 1

/* Version number of package */
#define VERSION "1.3.0"

#endif
