@class NSString;

@interface IESLiveStreamPlayerEffectPlugin : IESLiveStreamPlayerBasePlugin <IESLiveStreamPlayerEffectPluginProtocol>

@property (readonly, nonatomic) BOOL effectConfigured;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldActivatePlugin;

- (void)didSetAttachingDIContext;
- (int)setupWithConfig:(id)a0;
- (id)getComposerNodes;
- (void)removeComposerNodes:(id)a0 withTag:(id)a1;
- (void)setEffectHandle:(id)a0;
- (BOOL)getEnableVideoEffect:(id)a0;
- (void)setComposerNodes:(id)a0 withTag:(id)a1;
- (void)appendComposerNodes:(id)a0 withTag:(id)a1;
- (void)setRenderCacheStringValue:(id)a0 withKey:(id)a1;
- (id)getEffectTrackData:(long long)a0;
- (void)player:(id)a0 mediaSizeDidChange:(struct CGSize { double x0; double x1; })a1;
- (void)setEffectEnable:(BOOL)a0 withEffectType:(id)a1;
- (void)setVideoEffectSixDoFLiteMode:(id)a0 layout:(id)a1;
- (void)sendMessage:(long long)a0 param1:(long long)a1 param2:(long long)a2 param3:(id)a3;
- (void)effectDealloced;
- (void)sixDofEffect;
- (void)pe_didReloadWithStreamData:(id)a0 sdkKey:(id)a1 callTrace:(id)a2;
- (void)pe_playWithCallTrace:(id)a0;
- (void)releaseEffect;

@end
