// function file to control the movement of the robot

// DO NOT DELETE / COMMENT THESE LINES !!!!

void movements() {

 // BELOW IS THE EXAMPLE FOR A ACTION / MOVEMENT OF ROBOT WHEN BOTH LEFT & RIGHT SENSORS(OBSTACLE AVOIDANCE SENSORS) ARE TRIGGERED

 //  "0" MEANS OBSTACLE IS PRESENT & "1" MEANS NO OBSTACLE
 
//  if (left_sensor_status==0 && right_sensor_status==0){
//    Serial.println("1 Move Straight");
//    my_robot.MoveForward(40);
//  }

  if (left_sensor_status==0 && right_sensor_status==0){
    // INSERT YOUR CODE HERE
  }


  else if(right_sensor_status==0){
    // INSERT YOUR CODE HERE
  }

  else if(left_sensor_status==0){
    // INSERT YOUR CODE HERE
  }      
  else{
  // BELOW IS THE CODE FOR THE BOTTOM LINE FOLLOWING SENSORS ARE TRIGGERED  

  //  "0" MEANS OBSTACLE IS PRESENT & "1" MEANS NO OBSTACLE
  
    if(bottom_left_sensor_status==1 && bottom_right_sensor_status==0){
      // INSERT YOUR CODE HERE 
    }
  
    else if(bottom_left_sensor_status==0 && bottom_right_sensor_status==1){
      // INSERT YOUR CODE HERE 
    }
    
    else{
      // INSERT YOUR CODE HERE
    }
  }
}
