@interface BDPPluginBackgroundAudio : BDPBridgeInstancePlugin

+ (unsigned long long)pluginMode;

- (void)getBackgroundAudioContextWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)setBgAudioStateWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)getBgAudioStateWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)operateBgAudioWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;

@end
