import os, signal

pid = int(input("Enter PID of process: "))

os.kill(pid ,signal.SIGTSTP)