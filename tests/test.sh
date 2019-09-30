executable=$1

for file in test_??.test
do
	$executable < $file > temp
	if cmp temp ${file%%.test}.result
	then
		echo Test "$file": SUCCESS
	else 
		echo Test "$file": FAIL
	fi
done
