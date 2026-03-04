# C++23 application template

This repository is a template for developing C++23 (or newer!) applications with modules and `import std;`. Configuration files are provided for the following tools:

- CMake;
- Clang-Format;
- Clang-Tidy.

## Required tools versions

|Tool|Minimum required version|
|---|---|
|CMake|4.0.0|
|Ninja|1.11|
|Clang-Format|22|
|Clang-Tidy|?|

## Compiler support

|Compiler|Minimum required version|
|---|---|
|GCC|15|
|MSVC|14.36|
|Clang|18.1.2|

## Configuring, building and running the project

0) Open a terminal in the root directory of the project
1) Ask CMake to generate the build system in a directory named `build`:

    ```sh
    cmake -G Ninja -B build
    ```

    **Ninja is currently the only generator able to handle `import std;`, so do not omit "-G Ninja" in the command line.**

    If the project's configuration must be updated, simply run:

    ```sh
    cmake build
    ```

    so that CMake only regenerates what is needed.

2) Build the project:

    ```sh
    cmake --build build
    ```

3) Run the project:

    ```sh
    ./build/exe
    ```
