@interface BDPPluginImagePicker_HG : BDPBridgeInstancePlugin

- (void)chooseImageWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (BOOL)pngFixEnableWithAppID:(id)a0;
- (BOOL)isPNGImage:(id)a0 plugin:(id)a1;
- (void)showAlertView:(id)a0 completion:(id /* block */)a1;

@end
