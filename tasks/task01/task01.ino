// ФИО: Москвитин Олег Евгеньевич
// Группа: 441
// Задание 1

// число ножек
int num_of_pins = 5;

// ножки 
int pins[] = {3, 5, 6, 9, 10};

// периодичность миганий
// unsigned long blinkPeriod[] = {10000, 1000, 500, 100, 50};

unsigned long blinkPeriod[] = {32000000, 16000000, 4000000, 2000000, 1000000};

// текущий момент времени
unsigned long currentMicros = 0;

// моменты времени, когда происходило последнее мигание
unsigned long previousBlinkMicros[] = {0, 0, 0, 0, 0};

// состояния лампочек
int ledState[] = {LOW, LOW, LOW, LOW, LOW};

void setup()
{
  // подготовка ножек к работе
  for (int i = 0; i < num_of_pins; ++i)
    pinMode(pins[i], OUTPUT);
}

void loop()
{
  currentMicros = micros();
  
  for (int i = 0; i < num_of_pins; ++i)
    if (currentMicros - previousBlinkMicros[i] >= blinkPeriod[i])
  	{
    	// обновляем время последнего мигания
    	previousBlinkMicros[i] = currentMicros;
    
    	// обновляем состояние
    	ledState[i] = (ledState[i] == LOW)? HIGH : LOW;   
    	digitalWrite(pins[i], ledState[i]);
  	}
}
