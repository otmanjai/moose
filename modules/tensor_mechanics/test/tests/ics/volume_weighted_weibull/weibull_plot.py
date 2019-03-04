#!/usr/bin/env python

# This plotting script can be run after the csv files from the tests are generated to verify that
# the pdf generated by the VolumeWeightedWeibull IC matches the analytic expression for the pdf.

import pandas
import matplotlib.pyplot as plt
import numpy as np
import math

ax = plt.gca()
histo100 = pandas.read_csv('volume_weighted_weibull_initial_histo_0000.csv')
histo100['n'] = histo100['n'] / 0.02     #Divide by the bin width to get a pdf
histo100.plot(ax=ax,x='u_vww',y='n',label='VWW_100')

histo200 = pandas.read_csv('volume_weighted_weibull_finer_initial_histo_0000.csv')
histo200['n'] = histo200['n'] / 0.02     #Divide by the bin width to get a pdf
histo200.plot(ax=ax,x='u_vww',y='n',label='VWW_200')

median = 1.0
modulus = 15.0
lam = median * math.pow(-1.0 / math.log(0.5), 1.0 / modulus)
pdf_x = np.arange(0, 2, 0.01)
pdf_y = np.empty(200)
for i in xrange(200):
    pdf_y[i] = modulus / lam * math.pow(pdf_x[i] / lam, (modulus - 1.0)) * math.exp(-math.pow(pdf_x[i] / lam, modulus))
plt.plot(pdf_x, pdf_y, label='analytic')
ax.legend()

plt.savefig('weibull_plot.pdf')
