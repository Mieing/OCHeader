@interface BDPPluginDatePicker : BDPBridgeInstancePlugin

@property (nonatomic) BOOL isShowing;

- (void)showDatePickerViewWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;

@end
