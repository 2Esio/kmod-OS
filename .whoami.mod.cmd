savedcmd_/home/marco/Documents/kmods/whoami.mod := printf '%s\n'   whoami.o | awk '!x[$$0]++ { print("/home/marco/Documents/kmods/"$$0) }' > /home/marco/Documents/kmods/whoami.mod
