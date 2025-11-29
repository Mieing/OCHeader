@class NSString;

@interface IESLiveStreamPlayerLufsPlugin : IESLiveStreamPlayerBasePlugin <IESLiveStreamPlayerLufsPluginProtocol>

@property (nonatomic) float sourceLuft;
@property (nonatomic) float sourcePeak;
@property (nonatomic) float targetLufs;
@property (nonatomic) BOOL isEnableExternalAETargetLufs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldActivatePlugin;

- (void)onLoudness:(float)a0 soucePeak:(float)a1 targetLufs:(float)a2 isEnableExternalAETargetLufs:(BOOL)a3;
- (float)getStreamSouceLuft;
- (float)getStreamSourcePeak;
- (float)getStreamTargetLufs;
- (BOOL)getIsStreamEnableExternalAETargetLufs;

@end
