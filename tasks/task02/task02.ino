// ФИО: Москвитин Олег Евгеньевич
// Группа: 441
// Задание 2

#include <TaskManagerIO.h>

// число ножек
int num_of_pins = 5;

// ножки 
int pins[] = {3, 5, 6, 9, 10};

// периодичность миганий
unsigned long blinkPeriod[] = {10000, 1000, 500, 100, 50};

// моменты времени, когда происходило последнее мигание
unsigned long previousBlinkMicros[] = {0, 0, 0, 0, 0};

// состояния лампочек
int ledState[] = {LOW, LOW, LOW, LOW, LOW};

void setup()
{
  // подготовка ножек к работе
  for (int i = 0; i < num_of_pins; ++i)
    pinMode(pins[i], OUTPUT);

  taskid_t taskId0 = taskManager.scheduleFixedRate(blinkPeriod[0], [] {
    if (ledState[0] == LOW) {
      ledState[0] = HIGH;
    }
    else {
      ledState[0] = LOW;
    }

    digitalWrite(pins[0], ledState[0]);
  }, TIME_MICROS);

  taskid_t taskId1 = taskManager.scheduleFixedRate(blinkPeriod[1], [] {
    if (ledState[1] == LOW) {
      ledState[1] = HIGH;
    }
    else {
      ledState[1] = LOW;
    }

    digitalWrite(pins[1], ledState[1]);
  }, TIME_MICROS);

  taskid_t taskId2 = taskManager.scheduleFixedRate(blinkPeriod[2], [] {
    if (ledState[2] == LOW) {
      ledState[2] = HIGH;
    }
    else {
      ledState[2] = LOW;
    }

    digitalWrite(pins[2], ledState[2]);
  }, TIME_MICROS);

  taskid_t taskId3 = taskManager.scheduleFixedRate(blinkPeriod[3], [] {
    if (ledState[3] == LOW) {
      ledState[3] = HIGH;
    }
    else {
      ledState[3] = LOW;
    }

    digitalWrite(pins[3], ledState[3]);
  }, TIME_MICROS);

  taskid_t taskId4 = taskManager.scheduleFixedRate(blinkPeriod[4], [] {
    if (ledState[4] == LOW) {
      ledState[4] = HIGH;
    }
    else {
      ledState[4] = LOW;
    }

    digitalWrite(pins[4], ledState[4]);
  }, TIME_MICROS);
}

void loop()
{
  taskManager.runLoop();
}
