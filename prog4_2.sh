#!/bin/bash

echo "Assignment #4-2, Michael Manzanares, manz1119@yahoo.com"

gcc ./prog4_2.c -o exec2

echo 'a' | ./encryptor | ./exec2 a
