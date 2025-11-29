@interface BDPPluginMetal_HG : BDPBridgeInstancePlugin

- (id)deviceModelIdentifier;
- (BOOL)isIPad9;
- (void)getMetalInfoSyncWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (id)init;

@end
