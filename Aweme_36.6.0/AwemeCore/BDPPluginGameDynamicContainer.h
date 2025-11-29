@interface BDPPluginGameDynamicContainer : BDPBridgeInstancePlugin

- (void)openGameBulletContainerWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)updateGameContainerFrameWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)closeGameBulletContainerWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)getGameContainersInfoWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)publishGameBulletEventWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;

@end
