# cpp-vscode

## Instructions

- Make sure you set the exact path for gcc executable in `c_cpp_properties.json: "compilerPath": "EXACT_PATH_TO_GCC"`

- Also set either full or relative executable paths as `"miDebuggerPath": "gdb.exe"` and `"command": "g++.exe"` for `launch.json` (debug) and `tasks.json` (build) respectively.


#### Tested using VSCode / Windows 10 / GCC8 (x86_64-posix-seh-rev0 -- MinGW-x64)