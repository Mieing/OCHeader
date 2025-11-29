@interface BDPPluginPublicDevice : BDPBridgeInstancePlugin

- (void)getSystemInfoWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)makePhoneCallWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)getGeneralInfoWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)getNetworkTypeWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;

@end
