# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/QtFirstProject_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/QtFirstProject_autogen.dir/ParseCache.txt"
  "QtFirstProject_autogen"
  )
endif()
