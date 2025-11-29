@class NSDictionary, NSError, NSString;

@interface IESLiveStreamPlayerPlayerInfoPlugin : IESLiveStreamPlayerBasePlugin <IESLiveStreamPlayerPlayerInfoPluginProtocol>

@property (copy, nonatomic) NSDictionary *cacheMetaInfoReceived;
@property (retain, nonatomic) NSError *pullStreamError;
@property (nonatomic) unsigned long long playbackState;
@property (nonatomic) BOOL enableReplacePauseToStopInRtm;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldActivatePlugin;

- (long long)currentAudioStreamDecibel;
- (void)player:(id)a0 loadStateDidChange:(unsigned long long)a1;
- (void)player:(id)a0 playbackStateDidChange:(unsigned long long)a1;
- (void)setAlignMode:(unsigned long long)a0;
- (unsigned long long)alignMode;
- (id)previewFps;
- (void)player:(id)a0 didReceiveMetaInfo:(id)a1 processed:(BOOL)a2;
- (void)player:(id)a0 didReceiveError:(id)a1;
- (id)statisticInfoItemsForType:(unsigned long long)a0;
- (id)playerViewWithCallTrace:(id)a0;
- (void)togglePlayerOpaque:(BOOL)a0 callTrace:(id)a1;
- (BOOL)isVRStream;
- (BOOL)is6DofMode;
- (void)logLatency:(double)a0 vendor:(id)a1;
- (struct __CVBuffer { } *)copyInstantPixelBuffer;
- (id)getSeiMetaInfo;
- (void)pe_commonInit;
- (void)pe_prepareForReuse;
- (void)pe_presetPlayerPreferenceInfoIfNeeded:(id)a0;
- (id)debugInfo;
- (void).cxx_destruct;
- (BOOL)isRendered;
- (id)resolutionType;
- (long long)scaleType;
- (void)setScaleType:(long long)a0;

@end
