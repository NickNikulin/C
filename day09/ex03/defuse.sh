echo $(( $(date +%s) - $(stat -f%c bomb.txt) -1  ))
