@interface WASinglePickerView : WABasePickerView

- (long long)numberOfComponentsInPickerView:(id)a0;
- (void)updatePickerView:(id)a0 current:(long long)a1 column:(long long)a2;
- (void)pickerView:(id)a0 didSelectRow:(long long)a1 inComponent:(long long)a2;

@end
