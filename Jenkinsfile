pipeline {
    agent any

    stages {
        stage('build') {
            steps {
                echo 'build World'
            }
        }
        stage('test') {
            steps {
                echo 'test World'
            }
        }
        stage('deploy') {
            steps {
                echo 'deploy World'
            }
        }
    }
    post{
        always{
            emailext body: 'summary status', subject: 'pipeline status', to: 'nagar.sandeep@gmail.com'
        }
    }
}
