# numsim-3
## Compiling:

### in ./Magrathea:

       make (produces "magrathea" binary)
### in ./build (create if it's not existing):
       make clean && cmake --DEBUG_VISU=ON .. && make (produces "NumSim" binary)
## Executing:
### a) Karman:
### in ./Magrathea (alternatively just use karman.geom):
       ./magrathea -size 100x20 -length 10x2 -speed 1x0 -pressure 0 -pre 4 -o karman

       open "karman.geom", replace all "-" with "I"

### b) Step:
### in ./Magrathea (alternatively just use step.geom):
      ./magrathea -size 100x20 -length 10x2 -speed 1x0 -pressure 0 -pre 3 -o step

      open "karman.geom", replace all "-" with "I"

### in ./build:
       ./NumSim -geom ../Magrathea/karman.geom -param ../karman.param

       ./NumSim -geom ../Magrathea/step.geom -param ../step.param
