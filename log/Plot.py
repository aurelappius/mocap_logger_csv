import matplotlib.pyplot as plt
import numpy as np
import pandas as pd
import sys
import math
import os
import csv
import statistics

# Parameters
Start = 0  # start frame
N = 10000  # how many frames

ref_color = "black"  # reference color
curve_color = "red"  # measurement color
# Plot initialization
fig_xyz = plt.figure()  # xyz plot
z_plt = fig_xyz.add_subplot(111)

# fig_thrust = plt.figure()  # xyz plot
# thrust_plt = fig_thrust.add_subplot(111)
# Data initialization / Read Data

#df = pd.read_csv(sys.argv[2])


header_list = [
    "t", "x", "y", "z"
]
line = [0]*len(sys.argv)
for i in range(1, len(sys.argv)):
    df = pd.read_csv(sys.argv[i])
    time = pd.read_csv(sys.argv[i], usecols=["t"],
                       names=header_list).to_numpy()
    p = pd.read_csv(sys.argv[i], usecols=["x", "y", "z"],
                    names=header_list).to_numpy()

    # t-z plot
    #z_plt.scatter(time, p_ref[:, 2], marker="o", s=1, c=ref_color)
   # if(i == 1):
    line[i] = z_plt.scatter(time/1000, p[:, 0], marker="o", s=1, c="blue")
    line[i].set_label("iteration "+str(i))
    # if(i == 2):
    # high_line = z_plt.scatter(
    #     time/1000, p[:, 2]-1.0, marker="o", s=1, c=curve_color)
    # high_line.set_label('Quadcopter out of ground effect (-1 m)')

    # t-thrust plot
    #thrust_plt.scatter(time, rpy[:, 1], marker="o", s=1, c=curve_color)


z_plt.set_xlabel("time [s]")
z_plt.set_ylabel("Z [mm]")
z_plt.legend()
plt.savefig("plot.svg")

# thrust_plt.set_xlabel("time [s]")
# thrust_plt.set_ylabel("thrust [mm]")

# Display Plots
plt.show()
