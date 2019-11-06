#!/bin/bash
curr=$(pwd)
cd $HOME/myexpos/expl/expl_progs/
files=$(ls *.expl)
cd ..
for i in $files
do
		./expl expl_progs/$i
		echo "Done compiling $i..."
done
cd $curr
