#!/usr/bin/env python

flag = "AskBuddie{N41c3_3ncryp710N_w17h_chr_4nd_ord}"
ciphertext = ""
for char in flag:
	ciphertext += chr(ord(char) - 26)

print ciphertext