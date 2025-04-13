savedcmd_/home/rpi2/lkm/vif.mod := printf '%s\n'   vif.o | awk '!x[$$0]++ { print("/home/rpi2/lkm/"$$0) }' > /home/rpi2/lkm/vif.mod
