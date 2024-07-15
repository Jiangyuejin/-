#ifndef __MYI2C_H
#define __MYI2C_H

void MyI2C_Init(void);
void MyI2C_Start(void);
void MyI2C_Stop(void);
void MyI2C_SendByte(uint8_t Byte);
uint8_t MyI2C_ReciveByte(void);
void MyI2C_SendAck(uint8_t AckBite);
uint8_t MyI2C_ReceiveAck(void);

#endif