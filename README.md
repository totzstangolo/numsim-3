# numsim-3
# Compiling:
#   in ./Magrathea:
#       make (produces "magrathea" binary)
#   in ./build (create if it's not existing):
#       make clean && cmake --DEBUG_VISU=ON .. && make (produces "NumSim" binary)
# Executing:
# a) Karman:
#   in ./Magrathea:
#       ./magrathea -size 100x20 -length 10x200 -speed 1x0 -pressure 0 -o karman
#   in ./build:
#       ./NumSim -geom ../Magrathea/karman.geom
