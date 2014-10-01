#! /usr/bin/env bash

FLAGS="-lpthread -lrt"

FILE=${1%.*}

esterel vitesse.strl &>1

if [ -f $FILE.c ] && [ -f "$2" ]
then
	echo -ne '\007'
	gcc -o $FILE $FILE.c "$2" $FLAGS
fi

exit 0
