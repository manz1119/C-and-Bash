#!/bin/bash
#!/bin/except -f

echo "Assignment #4-1, Michael Manzanares, manz1119@yahoo.com"

#password=$`grep -i "$3" $1 | cut -d ',' -f3`
password=AD77ABB222E38BD3
server=$2
user=`echo $3 | cut -d ' ' -f1 | tr [:upper:] [:lower:]`
CapsNames=$(echo $3 | tr [:lower:] [:upper:])

expect -c "
	spawn scp $user@$server:* .
	expect password: { send $password\r }
	sleep 1
	exit
"> hide.txt

for item in $(echo *enc*)
do
	echo $item
done
rm hide.txt
