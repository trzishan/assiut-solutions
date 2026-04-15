for i in {1..1000}; do
    zrunner b.cpp <<< "$i"
done
