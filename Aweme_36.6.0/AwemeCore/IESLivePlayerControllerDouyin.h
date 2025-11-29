@class NSString;

@interface IESLivePlayerControllerDouyin : IESLivePlayerController <IESLivePlayerEffectProtocol>

@property (nonatomic) BOOL effectConfigured;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupWithConfig:(id)a0;
- (id)getComposerNodes;
- (void)removeComposerNodes:(id)a0 withTag:(id)a1;
- (void)setEffectHandle:(id)a0;
- (BOOL)getEnableVideoEffect:(id)a0;
- (void)setComposerNodes:(id)a0 withTag:(id)a1;
- (void)appendComposerNodes:(id)a0 withTag:(id)a1;
- (void)setRenderCacheStringValue:(id)a0 withKey:(id)a1;
- (id)getEffectTrackData:(long long)a0;
- (void)smoothlySwitchCurrentItemResolution:(id)a0 switchReason:(long long)a1 completion:(id /* block */)a2;
- (void)resetPreload;
- (void)reloadWithStreamData:(id)a0;
- (void)startVideoRendering;
- (void)stopVideoRendering;
- (void)reloadURL:(id)a0 sdkParams:(id)a1;
- (void)reloadURL:(id)a0 sdkParams:(id)a1 force:(BOOL)a2;
- (void)reloadWithStreamData:(id)a0 defaultSDKKey:(id)a1;
- (void)reloadWithStreamData:(id)a0 defaultSDKKey:(id)a1 useTLS:(BOOL)a2;
- (void)reloadWithStreamData:(id)a0 force:(BOOL)a1;
- (void)reloadWithStreamData:(id)a0 force:(BOOL)a1 skipReset:(BOOL)a2;
- (void)reloadWithStreamData:(id)a0 defaultSDKKey:(id)a1 force:(BOOL)a2;
- (void)reloadWithStreamData:(id)a0 defaultSDKKey:(id)a1 force:(BOOL)a2 skipReset:(BOOL)a3;
- (void)clearSEIInfo;
- (void)enableAudioProcessorInPlaying:(BOOL)a0;
- (void)setPlayerMutedInAudioProcessing:(BOOL)a0;
- (void)preloadWithStreamData:(id)a0;
- (void)startAudioRendering;
- (void)stopAudioRendering;
- (void)updateSDKKey:(id)a0;
- (void)updateSDKKey:(id)a0 useTLS:(BOOL)a1;
- (void)setEffectEnable:(BOOL)a0 withEffectType:(id)a1;
- (void)setVideoEffectSixDoFLiteMode:(id)a0 layout:(id)a1;
- (void)sendMessage:(long long)a0 param1:(long long)a1 param2:(long long)a2 param3:(id)a3;
- (void)effectDealloced;
- (id)p_transformToVeLiveConfig:(id)a0;
- (void)trackUsingDeprecateAPI:(id)a0;
- (void)close;
- (void)play;
- (void)pause;
- (void)stop;
- (void)reset;
- (void)releaseEffect;

@end
