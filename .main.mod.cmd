savedcmd_/home/jl/virtualdriver/main.mod := printf '%s\n'   main.o | awk '!x[$$0]++ { print("/home/jl/virtualdriver/"$$0) }' > /home/jl/virtualdriver/main.mod
