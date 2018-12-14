# numsim-3
## Compiling:

### in ./Magrathea:

       make (produces "magrathea" binary)
### in numsim-3:
       scons

Produces build directory
## Executing:
### a) Karman:
Just use karman.geom and karman.param

### b) Step:
#### in ./Magrathea (alternatively just use step.geom):
      ./magrathea -size 100x20 -length 10x2 -speed 1x0 -pressure 0 -pre 3 -o step

      open "step.geom", replace all "-" with "V"

### in ./build:
       ./NumSim -geom ../Magrathea/karman.geom -param ../karman.param

       ./NumSim -geom ../Magrathea/step.geom -param ../step.param
