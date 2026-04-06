################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/Button/button.c 

OBJS += \
./Drivers/Button/button.o 

C_DEPS += \
./Drivers/Button/button.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/Button/%.o Drivers/Button/%.su Drivers/Button/%.cyclo: ../Drivers/Button/%.c Drivers/Button/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F091xC -c -I../Core/Inc -I../Drivers/STM32F0xx_HAL_Driver/Inc -I../Drivers/STM32F0xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F0xx/Include -I../Drivers/CMSIS/Include -I"C:/Users/Omen/STM32CubeIDE/workspace_2.0.0/Demo_Laborator/Drivers/Button" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Drivers-2f-Button

clean-Drivers-2f-Button:
	-$(RM) ./Drivers/Button/button.cyclo ./Drivers/Button/button.d ./Drivers/Button/button.o ./Drivers/Button/button.su

.PHONY: clean-Drivers-2f-Button

