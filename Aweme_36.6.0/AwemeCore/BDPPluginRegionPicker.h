@interface BDPPluginRegionPicker : BDPBridgeInstancePlugin

@property (nonatomic) BOOL isShowing;

- (void)showRegionPickerViewWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;

@end
