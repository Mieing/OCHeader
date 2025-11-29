@interface BDPPluginRemoteDebugModule : BDPBridgeInstancePlugin

- (void)sendMessageToIDEWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)reportReplayResultWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)getScreenshotWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;

@end
