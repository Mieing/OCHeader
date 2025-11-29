@interface BDPPluginUIWidget_HG : BDPBridgeInstancePlugin

- (void)showModalWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)showToastWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)hideToastWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)showActionSheetWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)openCardProfileWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;

@end
