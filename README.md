# cpp-vscode

## Instructions

- Make sure you set the full path for gcc executable as `"compilerPath": "FULL_PATH_TO_GCC"` in `c_cpp_properties.json`.

- Also set either full or relative executable paths as `"miDebuggerPath": "gdb.exe"` and `"command": "g++.exe"` for debug (`launch.json`) and build (`tasks.json`) configurations respectively.


#### Tested using GCC8.1 (x86_64-posix-seh-rev0 -- MinGW-x64) / VSCode1.3 / Windows 10