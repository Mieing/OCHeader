@interface BDPPluginWebAudio : BDPBridgeInstancePlugin

- (id)getRuntime:(id)a0;
- (void)callAudioThreadWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)callAudioThreadSyncWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)getAudioSettingsSyncWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;

@end
