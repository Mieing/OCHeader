@interface BDPPluginCustomPicker : BDPBridgeInstancePlugin

@property (nonatomic) BOOL isShowing;

- (void)showPickerViewWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)showMultiPickerViewWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)updateMultiPickerViewWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;

@end
