DIR=`pwd`

#use this selection to produce log files of all terminal content
logtofile="-l "
#logtofile=""

cp tmy3.csv $DIR/src/weather/WeatherProject_generated/WeatherProject-java-federates/WeatherProject-impl-java/Weather/target

cd $DIR/src/fedmanager
xterm -hold $logtofile -e "./run.sh" &

sleep 25 

curl -i -X POST http://127.0.0.1:8083/fedmgr --data '{"action": "START"}' -H "Content-Type: application/json" 

sleep 5

cd $DIR/src/interaction-injection-example/target
xterm -hold $logtofile -e "java -jar interaction-injection-example-0.1.0-SNAPSHOT.jar" &

sleep 15

cd $DIR/src/weather/WeatherProject_generated/WeatherProject-java-federates/WeatherProject-impl-java/Weather/target
xterm -hold $logtofile -e "java -jar Weather-0.1.0-SNAPSHOT.jar -configFile=conf/WeatherConfig.json" &

#cd $DIR/src/utility/UtilityProject_generated/UtilityProject-java-federates/UtilityProject-impl-java/Utility/target
#xterm -hold $logtofile -e "java -jar Utility-0.1.0-SNAPSHOT.jar -configFile=conf/UtilityConfig.json" &


#cd $DIR/src/house/HouseProject_generated/HouseProject-java-federates/HouseProject-impl-java/House/target
#xterm -hold $logtofile -e "java -jar House-0.1.0-SNAPSHOT.jar -configFile=conf/HouseConfig.json -name=House1" &
#xterm -hold $logtofile -e "java -jar House-0.1.0-SNAPSHOT.jar -configFile=conf/HouseConfig.json -name=House2" &

#xterm -hold $logtofile -e "java -jar House-0.0.1-SNAPSHOT.jar FedManager house1 INFO" &
#xterm -hold $logtofile -e "java -jar House-0.0.1-SNAPSHOT.jar FedManager house2 INFO" &
#xterm -hold $logtofile -e "java -jar House-0.0.1-SNAPSHOT.jar FedManager house3 INFO" &
#xterm -hold $logtofile -e "java -jar House-0.0.1-SNAPSHOT.jar FedManager house4 INFO" &
#xterm -hold $logtofile -e "java -jar House-0.0.1-SNAPSHOT.jar FedManager house5 INFO" &
#xterm -hold $logtofile -e "java -jar House-0.0.1-SNAPSHOT.jar FedManager house6 INFO" &
#xterm -hold $logtofile -e "java -jar House-0.0.1-SNAPSHOT.jar FedManager house7 INFO" &
#xterm -hold $logtofile -e "java -jar House-0.0.1-SNAPSHOT.jar FedManager house8 INFO" &
#xterm -hold $logtofile -e "java -jar House-0.0.1-SNAPSHOT.jar FedManager house9 INFO" &
#xterm -hold $logtofile -e "java -jar House-0.0.1-SNAPSHOT.jar FedManager house10 INFO" &
#xterm -hold $logtofile -e "java -jar House-0.0.1-SNAPSHOT.jar FedManager house11 INFO" &
#xterm -hold $logtofile -e "java -jar House-0.0.1-SNAPSHOT.jar FedManager house12 INFO" &
#xterm -hold $logtofile -e "java -jar House-0.0.1-SNAPSHOT.jar FedManager house13 INFO" &
#xterm -hold $logtofile -e "java -jar House-0.0.1-SNAPSHOT.jar FedManager house14 INFO" &
#xterm -hold $logtofile -e "java -jar House-0.0.1-SNAPSHOT.jar FedManager house15 INFO" &
#xterm -hold $logtofile -e "java -jar House-0.0.1-SNAPSHOT.jar FedManager house16 INFO" &
#xterm -hold $logtofile -e "java -jar House-0.0.1-SNAPSHOT.jar FedManager house17 INFO" &
#xterm -hold $logtofile -e "java -jar House-0.0.1-SNAPSHOT.jar FedManager house18 INFO" &
#xterm -hold $logtofile -e "java -jar House-0.0.1-SNAPSHOT.jar FedManager house19 INFO" &
#xterm -hold $logtofile -e "java -jar House-0.0.1-SNAPSHOT.jar FedManager house20 INFO" &

sleep 90




 
#sleep 30
#curl -i -X POST http://127.0.0.1:8083/api/fedmgr --data '{"action": "TERMINATE"}' -H "Content-Type: application/json"

