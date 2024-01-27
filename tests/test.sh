
#!/bin/bash

while true; do
    printf "? "
    read _input_

    #
    #   Window init. test
    #
    if [ "$_input_" == "init" ]; then
        echo "Running window initialization test..."
        g++ -Wall -Wextra -O3 -lGL -lglut init.cpp ../src/ing.cpp -o init
        ./init
    
    #
    #   Triangle test
    #
    elif [ "$_input_" == "triangle" ]; then
        echo "Running triangle draw test..."
        g++ -Wall -Wextra -O3 -lGL -lglut triangle.cpp ../src/ing.cpp -o triangle
        ./triangle
    
    elif [ "$_input_" == "quit" ] || [ "$_input_" == "exit" ]; then
        echo "Exiting..."
        exit

    #
    #   input not found
    #
    else
        echo "invalid input."
        
    fi
done
