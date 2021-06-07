# Neural-Network-on-Microcontrollers

In this project we are building a neural network on a microcontroller which takes a 10 x 10 image (containing hand written digit between 0 and 9) in the form of a 2D array as input and gives an output which is a number between 0 and 9 that the neural network predicted. Here we have built a neural network which have no hidden layers. It contains only input layer and output layer. The weights in this model are signed 8-bit integers. We used Arduino UNO to work with this model.
Later we build another neural network which contains one input layer, one output layer and two hidden layers. 
Since we are having 4 layers with the weights represented in single-precision floating point (32-bit wide) values we need a micro-controller with a floating-point unit and also having more RAM.
So, we are using ESP32 to work with this model.
Here we are using MNIST dataset for training the neural network in Python using TensorFlow and Keras libraries.

#
### Hardware Used:
    1)  Jump Wires
    2)  7-Segment Display
    3)  Arduino Uno (ROM 32KB RAM 2KB)
    4)  ESP32 (ROM 1.28MB RAM 320KB)

### Software Used:
    1)  Microchip Studio
    2)  Arduino IDE

#
### Block Diagram:
![image](https://user-images.githubusercontent.com/84563214/121001085-8a150a80-c7a8-11eb-89af-cb7b0008b34c.png)

## Neural Network Diagram:
### For ESP32
![image](https://user-images.githubusercontent.com/84563214/121002018-83d35e00-c7a9-11eb-95f2-27616281a706.png)

### For Arduino
![image](https://user-images.githubusercontent.com/84563214/121002525-0fe58580-c7aa-11eb-9056-ec8e76a65607.png)

#
### Some Scaled 10x10 grayscale images from MNIST dataset:
![image](https://user-images.githubusercontent.com/84563214/121003263-f7c23600-c7aa-11eb-919d-afe740f3eb0e.png)
![image](https://user-images.githubusercontent.com/84563214/121003288-014b9e00-c7ab-11eb-8a88-964d84324cb4.png)

#
### Image of a Prototype:

#### ARDUINO UNO
![image](https://user-images.githubusercontent.com/84563214/121003464-32c46980-c7ab-11eb-817e-d437476c3940.png)

 
#### ESP32
![image](https://user-images.githubusercontent.com/84563214/121003478-37891d80-c7ab-11eb-973b-a87d036ed82c.png)























