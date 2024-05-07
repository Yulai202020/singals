import os, signal, datetime, time
# signal.alarm(n) stop program in n second

def exit_script(signum, frame):
    print()
    print("exiting")
    exit(0)

def stop_script(signum, frame):
    print()
    print("I dont want to stop")

def teminate_script(signum, frame):
    print()
    print("I dont want to be terminated")

print("PID of process: ", os.getpid())

signal.signal(signal.SIGINT, exit_script) # ^C
signal.signal(signal.SIGTSTP, stop_script) # ^Z
signal.signal(signal.SIGTERM, teminate_script) # kill command

while True:
    now = datetime.datetime.now()
    current_time = now.strftime("%H:%M:%S")
    print(current_time)
    time.sleep(1)