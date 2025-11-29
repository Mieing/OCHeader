@interface BDPPluginRecentTask : BDPBridgeInstancePlugin

- (void)getRecentAppListWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)removeFromRecentAppListWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;

@end
