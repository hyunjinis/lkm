savedcmd_/home/rpi1/lkm/vif.mod := printf '%s\n'   vif.o | awk '!x[$$0]++ { print("/home/rpi1/lkm/"$$0) }' > /home/rpi1/lkm/vif.mod
