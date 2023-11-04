# C-Primer-Plus-6th-Edition-Source-Code

## 格式化代码

```bash
apt-get update
apt-get install indent

Lindent.sh *.c
find . -name "*.c" -exec ./Lindent.sh {} \;
find . -name "*.h" -exec ./Lindent.sh {} \;
find . -name "*.c~" -exec rm -rf {} \;
find . -name "*.h~" -exec rm -rf {} \;

docker build -t gcc-indent:12.3-bullseye .

```

## GCC 编译代码

```bash
# GCC 编译代码时打印出编译过程的详细信息
$ gcc -v inform.c -o inform.out

# GCC 支持的标准
root@2a16e8bf7228:/C-Primer-Plus-6th-Edition-Source-Code/ch01# gcc --help -v | grep std

  -std=<standard>          Assume that the input sources are for <standard>.
  -fextern-std=<standard>     Set C++ name mangling compatibility with <standard>.
  -Wintrinsics-std            Warn on intrinsics not part of the selected standard.
  -std=f2003                  Conform to the ISO Fortran 2003 standard.
  -std=f2008                  Conform to the ISO Fortran 2008 standard.
  -std=f2008ts                Conform to the ISO Fortran 2008 standard including TS 29113.
  -std=f2018                  Conform to the ISO Fortran 2018 standard.
  -std=f95                    Conform to the ISO Fortran 95 standard.
  -std=gnu                    Conform to nothing in particular.
  -std=legacy                 Accept extensions to support legacy code.
  --no-standard-includes      Same as -nostdinc.
  --no-standard-libraries     Same as -nostdlib.
  -Winit-list-lifetime        Warn about uses of std::initializer_list that can result in dangling pointers.
  -Wpessimizing-move          Warn about calling std::move on a local object in a return statement preventing copy elision.
  -Wredundant-move            Warn about redundant calls to std::move.
  -ansi                       A synonym for -std=c89 (for C) or -std=c++98 (for C++).
  -fhonor-std                 This option lacks documentation.
  -fobjc-std=objc1            Conform to the Objective-C 1.0 language as implemented in GCC 4.0.
  -nostdinc                   Do not search standard system include directories (those specified with -isystem will still be used).
  -nostdinc++                 Do not search standard system include directories for C++.
  -nostdlib                   Do not look for object files in standard path.
  -std=c++03                  Conform to the ISO 1998 C++ standard revised by the 2003 technical corrigendum.  Same as -std=c++98.
  -std=c++0x                  Deprecated in favor of -std=c++11.  Same as -std=c++11.
  -std=c++11                  Conform to the ISO 2011 C++ standard.
  -std=c++14                  Conform to the ISO 2014 C++ standard.
  -std=c++17                  Conform to the ISO 2017 C++ standard.
  -std=c++1y                  Deprecated in favor of -std=c++14.  Same as -std=c++14.
  -std=c++1z                  Deprecated in favor of -std=c++17.  Same as -std=c++17.
  -std=c++20                  Conform to the ISO 2020 C++ standard (experimental and incomplete support).
  -std=c++23                  Conform to the ISO 2023 C++ draft standard (experimental and incomplete support).
  -std=c++2a                  Conform to the ISO 2020 C++ standard (experimental and incomplete support).  Same as -std=c++20.
  -std=c++2b                  Conform to the ISO 2023 C++ draft standard (experimental and incomplete support).  Same as -std=c++23.
  -std=c++98                  Conform to the ISO 1998 C++ standard revised by the 2003 technical corrigendum.
  -std=c11                    Conform to the ISO 2011 C standard.
  -std=c17                    Conform to the ISO 2017 C standard (published in 2018).
  -std=c18                    Conform to the ISO 2017 C standard (published in 2018).  Same as -std=c17.
  -std=c1x                    Deprecated in favor of -std=c11.  Same as -std=c11.
  -std=c2x                    Conform to the ISO 202X C standard draft (experimental and incomplete support).
  -std=c89                    Conform to the ISO 1990 C standard.  Same as -std=c90.
  -std=c90                    Conform to the ISO 1990 C standard.
  -std=c99                    Conform to the ISO 1999 C standard.
  -std=c9x                    Deprecated in favor of -std=c99.  Same as -std=c99.
  -std=gnu++03                Conform to the ISO 1998 C++ standard revised by the 2003 technical corrigendum with GNU extensions.  Same as -std=gnu++98.
  -std=gnu++0x                Deprecated in favor of -std=gnu++11.  Same as -std=gnu++11.
  -std=gnu++11                Conform to the ISO 2011 C++ standard with GNU extensions.
  -std=gnu++14                Conform to the ISO 2014 C++ standard with GNU extensions.
  -std=gnu++17                Conform to the ISO 2017 C++ standard with GNU extensions.
  -std=gnu++1y                Deprecated in favor of -std=gnu++14.  Same as -std=gnu++14.
  -std=gnu++1z                Deprecated in favor of -std=gnu++17.  Same as -std=gnu++17.
  -std=gnu++20                Conform to the ISO 2020 C++ standard with GNU extensions (experimental and incomplete support).
  -std=gnu++23                Conform to the ISO 2023 C++ draft standard with GNU extensions (experimental and incomplete support).
  -std=gnu++2a                Conform to the ISO 2020 C++ standard with GNU extensions (experimental and incomplete support).  Same as -std=gnu++20.
  -std=gnu++2b                Conform to the ISO 2023 C++ draft standard with GNU extensions (experimental and incomplete support).  Same as -std=gnu++23.
  -std=gnu++98                Conform to the ISO 1998 C++ standard revised by the 2003 technical corrigendum with GNU extensions.
  -std=gnu11                  Conform to the ISO 2011 C standard with GNU extensions.
  -std=gnu17                  Conform to the ISO 2017 C standard (published in 2018) with GNU extensions.
  -std=gnu18                  Conform to the ISO 2017 C standard (published in 2018) with GNU extensions.  Same as -std=gnu17.
  -std=gnu1x                  Deprecated in favor of -std=gnu11.  Same as -std=gnu11.
  -std=gnu2x                  Conform to the ISO 202X C standard draft with GNU extensions (experimental and incomplete support).
  -std=gnu89                  Conform to the ISO 1990 C standard with GNU extensions.  Same as -std=gnu90.
  -std=gnu90                  Conform to the ISO 1990 C standard with GNU extensions.
  -std=gnu99                  Conform to the ISO 1999 C standard with GNU extensions.
  -std=gnu9x                  Deprecated in favor of -std=gnu99.  Same as -std=gnu99.
  -std=iso9899:1990           Conform to the ISO 1990 C standard.  Same as -std=c90.
  -std=iso9899:199409         Conform to the ISO 1990 C standard as amended in 1994.
  -std=iso9899:1999           Conform to the ISO 1999 C standard.  Same as -std=c99.
  -std=iso9899:199x           Deprecated in favor of -std=iso9899:1999.  Same as -std=c99.
  -std=iso9899:2011           Conform to the ISO 2011 C standard.  Same as -std=c11.
  -std=iso9899:2017           Conform to the ISO 2017 C standard (published in 2018).  Same as -std=c17.
  -std=iso9899:2018           Conform to the ISO 2017 C standard (published in 2018).  Same as -std=c17.
  -Wanalyzer-double-fclose    Warn about code paths in which a stdio FILE can be closed more than once.
  -Wanalyzer-file-leak        Warn about code paths in which a stdio FILE is not closed.
  -fopt-info                  Enable all optimization info dumps on stderr.
  -fstdarg-opt                Optimize amount of stdarg registers saved to stack at start of function.
  -fdiagnostics-generate-patch Print fix-it hints to stderr in unified diff format.
  -fdump-analyzer-stderr      Dump various analyzer internals to stderr.
  -flto-compression-level=<number>	Use z Use zlib/zstd compression level <number> for IL.

```



