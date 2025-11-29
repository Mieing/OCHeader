@interface BDPPluginPublicWifiModule : BDPBridgeInstancePlugin

- (id)getWifiInfo;
- (void)callBackWifiInfoWithBlock:(id /* block */)a0 wifiInfo:(id)a1 uniqueID:(id)a2;
- (void)p_callBackWifiInfoWithBlock:(id /* block */)a0 wifiInfo:(id)a1;
- (BOOL)isValidWIFIInfo:(id)a0;
- (void)getConnectedWifiWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;

@end
