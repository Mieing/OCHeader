@interface BDPPluginWifiModule_HG : BDPBridgeInstancePlugin

- (void)getConnectedWifiWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)getWifiListWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)onGetWifiListWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)offGetWifiListWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;

@end
