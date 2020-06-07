# KHelloWorld
Simple kernel driver Hello World

# How to

Enable test mode: ```bcdedit /set TESTSIGNING ON```  
Create a service: ```sc create [service name] binPath= [path to your .sys file] type= kernel```  
Start it: ```sc start [service name]```  

To check if the drivers was loaded successfully use DebugView:
- https://docs.microsoft.com/en-us/sysinternals/downloads/debugview
