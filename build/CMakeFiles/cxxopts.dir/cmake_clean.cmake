file(REMOVE_RECURSE
  "libcxxopts.a"
  "libcxxopts.pdb"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/cxxopts.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
