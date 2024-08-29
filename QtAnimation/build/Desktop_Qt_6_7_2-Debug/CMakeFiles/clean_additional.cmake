# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/QtAnimation_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/QtAnimation_autogen.dir/ParseCache.txt"
  "QtAnimation_autogen"
  )
endif()
