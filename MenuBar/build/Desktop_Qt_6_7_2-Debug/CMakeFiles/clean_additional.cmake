# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/MenuBar_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/MenuBar_autogen.dir/ParseCache.txt"
  "MenuBar_autogen"
  )
endif()
