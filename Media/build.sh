#!/bin/sh

#先编译sensor

cd Sensor

./build.sh

cd ../

#编译媒体库
make clean; make
cp Lib/hisi3516dv300/libmedia.so ./output/ -f

rm -rf ./Bin

