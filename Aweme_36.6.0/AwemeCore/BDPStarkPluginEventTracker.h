@interface BDPStarkPluginEventTracker : BDPBridgeInstancePlugin

- (void)eventTrackerWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)eventBeginWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)eventEndWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;

@end
