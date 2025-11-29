@interface BDPPluginDynamicContainer : BDPBridgeInstancePlugin

- (void)preloadBulletResourcesWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)openBulletContainerWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)publishBulletEventWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)closeBulletContainerWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)getBulletContainerExtraInfoWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)getContainersInfoWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)getStrategosResponseWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)enableBulletTransmitEventWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)disableBulletTransmitEventWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;

@end
