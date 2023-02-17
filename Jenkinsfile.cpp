pipeline {
    agent any

stages{
  stage('Build') {
    steps{
      sh 'g++ -o PES2UG20CS114 PES2UG20CS114.cpp'
    }
  }

  stage('Test') {
    steps{
       sh './PES2UG20CS114'
    }
  }

  stage('Deploy') {
    steps{
      echo '---DEPLOYMENT SUCCESSFUL---'
    }
  }
}
post {
    failure {
        echo '---PIPELINE FAILED---'
    }
  }
}

