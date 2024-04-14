// ФИО: Москвитин Олег Евгеньевич
// Группа: 441
// Задание 1

// число ножек
int num_of_pins = 5;

// ножки 
int pins[] = {3, 5, 6, 9, 10};

// периодичность миганий
unsigned long blinkPeriod[] = {10000, 1000, 500, 100, 50};

// текущий момент времени
unsigned long currentMicros = 0;

// моменты времени, когда происходило последнее мигание
unsigned long previousBlinkMicros[] = {0, 0, 0, 0, 0};

// состояния лампочек
int ledState[] = {LOW, LOW, LOW, LOW, LOW};

void setup()
{
  // подготовка ножек к работе
  pinMode(pins[0], OUTPUT);
  pinMode(pins[1], OUTPUT);
  pinMode(pins[2], OUTPUT);
  pinMode(pins[3], OUTPUT);
  pinMode(pins[4], OUTPUT);
}

void loop()
{
  currentMicros = micros();

  // 1-ая ножка
  if (currentMicros - previousBlinkMicros[0] >= blinkPeriod[0])
  {
    	// обновляем время последнего мигания
    	previousBlinkMicros[0] = currentMicros;
    
    	// обновляем состояние
    	ledState[0] = (ledState[0] == LOW)? HIGH : LOW;   
    	digitalWrite(pins[0], ledState[0]);
  }

  // 2-ая ножка
  if (currentMicros - previousBlinkMicros[1] >= blinkPeriod[1])
  {
    	// обновляем время последнего мигания
    	previousBlinkMicros[1] = currentMicros;
    
    	// обновляем состояние
    	ledState[1] = (ledState[1] == LOW)? HIGH : LOW;   
    	digitalWrite(pins[1], ledState[1]);
  }

  // 3-ья ножка
  if (currentMicros - previousBlinkMicros[2] >= blinkPeriod[2])
  {
    	// обновляем время последнего мигания
    	previousBlinkMicros[2] = currentMicros;
    
    	// обновляем состояние
    	ledState[2] = (ledState[2] == LOW)? HIGH : LOW;   
    	digitalWrite(pins[2], ledState[2]);
  }

  // 4-ая ножка
  if (currentMicros - previousBlinkMicros[3] >= blinkPeriod[3])
  {
    	// обновляем время последнего мигания
    	previousBlinkMicros[3] = currentMicros;
    
    	// обновляем состояние
    	ledState[3] = (ledState[3] == LOW)? HIGH : LOW;   
    	digitalWrite(pins[3], ledState[3]);
  }

  // 5-ая ножка
  if (currentMicros - previousBlinkMicros[4] >= blinkPeriod[4])
  {
    	// обновляем время последнего мигания
    	previousBlinkMicros[4] = currentMicros;
    
    	// обновляем состояние
    	ledState[4] = (ledState[4] == LOW)? HIGH : LOW;   
    	digitalWrite(pins[4], ledState[4]);
  }
}
