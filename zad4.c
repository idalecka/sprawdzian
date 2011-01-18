#!/bin/bash

plik=`python -c "import random; print random.randrange(find -type f 
-all);"`
echo Czy usunac plik?(t/n):
echo $plik 
read pl

while (($plik!=$pl));do

if (($t));then
echo "Usuwam plik"
else
echo "plik nie zostal usuniety"

fi
sleep 1

done

