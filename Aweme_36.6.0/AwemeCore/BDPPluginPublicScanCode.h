@interface BDPPluginPublicScanCode : BDPBridgeInstancePlugin

@property BOOL isScanCodeRunning;

+ (unsigned long long)pluginMode;

- (void)scanCodeWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (id)init;

@end
