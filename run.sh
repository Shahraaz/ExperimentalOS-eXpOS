#!/bin/bash
curr=$(pwd)
cd $HOME/myexpos/
bash ./compile_spl.sh
cd xfs-interface
./xfs-interface run run.txt
cd ../
cd xsm
./xsm
cd $curr
