# Neural-Network-on-Microcontrollers

In this project we are building a neural network on a microcontroller which takes a 10 x 10 image (containing hand written digit between 0 and 9) in the form of a 2D array as input and gives an output which is a number between 0 and 9 that the neural network predicted. Here we have built a neural network which have no hidden layers. It contains only input layer and output layer. The weights in this model are signed 8-bit integers. We used Arduino UNO to work with this model.
Later we build another neural network which contains one input layer, one output layer and two hidden layers. 
Since we are having 4 layers with the weights represented in single-precision floating point (32-bit wide) values we need a micro-controller with a floating-point unit and also having more RAM.
So, we are using ESP32 to work with this model.
Here we are using MNIST dataset for training the neural network in Python using TensorFlow and Keras libraries.
