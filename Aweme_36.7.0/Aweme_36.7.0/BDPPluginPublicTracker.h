@interface BDPPluginPublicTracker : BDPBridgeInstancePlugin

- (id)logExtraFromAdParams:(id)a0;
- (void)sendAdLogWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)sendLogV3WithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)adTrackUrlsWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;

@end
