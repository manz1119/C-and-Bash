#!/bin/bash

echo "Assignment #4-3, Michael Manzanares, manz1119@yaho.com"

memo=memo
production=production
recipe=recipe

gcc -std=c99 prog4_3.c -o exec3

cat $memo.enc | ./exec3 4 > $memo.dec
cat $production.enc | ./exec3 4 > $production.dec
cat $recipe.enc | ./exec3 4 > $recipe.dec

ls -l *.dec
