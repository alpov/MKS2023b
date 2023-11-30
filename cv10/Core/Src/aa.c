void main(void)

{
  const uint8_t code[] = {7, 9, 3, 2, 12};
  uint8_t pos = 0;
  while (1) {
		if (key != -1) {
			if (key == code[pos]) {
				pos++;
				if (pos == sizeof(code)) {
					HAL_GPIO_TogglePin(LD1_GPIO_Port, LD1_Pin);
					pos = 0;
				}
			} else {
				pos = 0;
			}

			printf("code = %d > pos = %d\n", key, pos);
			HAL_Delay(500);
			key = -1;
		}
  }
}
