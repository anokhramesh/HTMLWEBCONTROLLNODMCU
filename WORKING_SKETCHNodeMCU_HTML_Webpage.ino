#include <ESP8266WiFi.h>

WiFiClient client;
WiFiServer server(80);
#define led1 D0
#define led2 D1
#define led3 D2
#define led4 D3
#define led5 D4
#define led6 D5
#define led7 D6
#define led8 D7
#define led9 D8

void setup() 
{
  // put your setup code here, to run once:
  Serial.begin(9600);
  WiFi.begin("dewa406", "Ramesh16384");
  while(WiFi.status() != WL_CONNECTED)
  {
    delay(200);
    Serial.print("..");
  }
  Serial.println();
  Serial.println("NodeMCU is connected!");
  Serial.println(WiFi.localIP());
  server.begin();
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT); 
  pinMode(led5,OUTPUT);
  pinMode(led6,OUTPUT);
  pinMode(led7,OUTPUT);
  pinMode(led8,OUTPUT);
  pinMode(led9,OUTPUT);

}

void loop() 
{
  // put your main code here, to run repeatedly:
  client = server.available();  //Gets a client that is connected to the server and has data available for reading.    
  if (client == 1)
  {  
    String request =  client.readStringUntil('\n');
    Serial.println(request);
    request.trim();
    if(request == "GET /led1on HTTP/1.1")
    {
      digitalWrite(led1, HIGH);
    }
    if(request == "GET /led1off HTTP/1.1")
    {
      digitalWrite(led1, LOW);
    }
    if(request == "GET /led2on HTTP/1.1")
    {
      digitalWrite(led2, HIGH);
    }
    if(request == "GET /led2off HTTP/1.1")
    {
      digitalWrite(led2, LOW);
    }
if(request == "GET /led3on HTTP/1.1")
    {
      digitalWrite(led3, HIGH);
    }
    if(request == "GET /led3off HTTP/1.1")
    {
      digitalWrite(led3, LOW);
    }
   if(request == "GET /led4on HTTP/1.1")
    {
      digitalWrite(led4, HIGH);
    }
    if(request == "GET /led4off HTTP/1.1")
    {
      digitalWrite(led4, LOW);
    }
if(request == "GET /led5on HTTP/1.1")
    {
      digitalWrite(led5, HIGH);
    }
    if(request == "GET /led5off HTTP/1.1")
    {
      digitalWrite(led5, LOW);
    }
if(request == "GET /led6on HTTP/1.1")
    {
      digitalWrite(led6, HIGH);
    }
    if(request == "GET /led6off HTTP/1.1")
    {
      digitalWrite(led6, LOW);
    }
if(request == "GET /led7on HTTP/1.1")
    {
      digitalWrite(led7, HIGH);
    }
    if(request == "GET /led7off HTTP/1.1")
    {
      digitalWrite(led7, LOW);
    }
if(request == "GET /led8on HTTP/1.1")
    {
      digitalWrite(led8, HIGH);
    }
    if(request == "GET /led8off HTTP/1.1")
    {
      digitalWrite(led8, LOW);
    }
if(request == "GET /led9on HTTP/1.1")
    {
      digitalWrite(led9, HIGH);
    }
    if(request == "GET /led9off HTTP/1.1")
    {
      digitalWrite(led9, LOW);
    }
}
  
  client.println("Content-Type: text/html");
  client.println("");
  client.println("<!DOCTYPE HTML>");
  client.println("<html>");
  client.println("<h1>WELCOME TO ANOKH AUTOMATION </h1>");
  client.println("<h3> HOME LOAD CONTROL SYSTEM<h3>");
  client.println("<br>");
  client.println("<a href=\"/led1on\"\"><button>LOAD 1 ON</button></a>");
  client.println("<a href=\"/led1off\"\"><button>LOAD 1 OFF</button></a><br/>");
  client.println("<a href=\"/led2on\"\"><button>LOAD 2 ON</button></a>");
  client.println("<a href=\"/led2off\"\"><button>LOAD 2 OFF</button></a><br/>");

  client.println("<a href=\"/led3on\"\"><button>LOAD 3 ON</button></a>");
  client.println("<a href=\"/led3off\"\"><button>LOAD 3 OFF</button></a><br/>");
  client.println("<a href=\"/led4on\"\"><button>LOAD 4 ON</button></a>");
  client.println("<a href=\"/led4off\"\"><button>LOAD 4 OFF</button></a><br/>");

  client.println("<a href=\"/led5on\"\"><button>LOAD 5 ON</button></a>");
  client.println("<a href=\"/led5off\"\"><button>LOAD 5 OFF</button></a><br/>");
  client.println("<a href=\"/led6on\"\"><button>LOAD 6 ON</button></a>");
  client.println("<a href=\"/led6off\"\"><button>LOAD 6 OFF</button></a><br/>");

  client.println("<a href=\"/led7on\"\"><button>LOAD 7 ON</button></a>");
  client.println("<a href=\"/led7off\"\"><button>LOAD 7 OFF</button></a><br/>");
  client.println("<a href=\"/led8on\"\"><button>LOAD 8 ON</button></a>");
  client.println("<a href=\"/led8off\"\"><button>LOAD 8 OFF</button></a><br/>");
  client.println("<a href=\"/led9on\"\"><button>LOAD 9 ON</button></a>");
  client.println("<a href=\"/led9off\"\"><button>LOAD 9 OFF</button></a><br/>");
  
  
  client.println("</html>");
}
