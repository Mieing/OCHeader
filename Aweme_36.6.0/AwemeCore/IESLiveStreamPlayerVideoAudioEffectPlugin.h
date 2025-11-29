@class IESLiveVideoAudioStrategyController, NSString, IESLiveRoomStrategyController;

@interface IESLiveStreamPlayerVideoAudioEffectPlugin : IESLiveStreamPlayerBasePlugin <IESLiveStreamPlayerVideoAudioEffectPluginProtocol>

@property (nonatomic) long long videoQualityAdaptiveCount;
@property (nonatomic) long long bmfSrType;
@property (retain, nonatomic) IESLiveRoomStrategyController *strategyController;
@property (retain, nonatomic) IESLiveVideoAudioStrategyController *videoAudioStrategyController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldActivatePlugin;

- (void)setEnableVideoProcess:(BOOL)a0;
- (void)player:(id)a0 loadStateDidChange:(unsigned long long)a1;
- (void)player:(id)a0 mediaSizeDidChange:(struct CGSize { double x0; double x1; })a1;
- (void)player:(id)a0 srTypeUpdate:(long long)a1 hasManualSetSRType:(BOOL)a2;
- (void)player:(id)a0 didUpdateScoreFakeStereoBefore:(double)a1 scoreFakeStereoAfter:(double)a2;
- (BOOL)shouldOptLargeStreamSuperReso;
- (void)setEnableVideoSDR2HDR:(BOOL)a0 callTrace:(id)a1;
- (void)removeRealTimeFeatureInfoWatch;
- (void)addRealTimeFeatureInfoWatch:(float)a0;
- (void)changeSuperResolutionWithStrategy;
- (void)changeSDR2HDRWithStrategy;
- (void)adjustVolumeEffectTargetLufs;
- (void)choosePlayerSpecifySceneForLOB;
- (void)updateSVCParam;
- (void)adjustWholeVolumeEffectParam;
- (void)changeVideoSharpenStateWithStrategy;
- (void)playerVolumeAdaptive;
- (void)setVideoSharpenLevel;
- (void)playerVideoQualityAdaptive;
- (void)onReceivedRealTimeFeatureOnAnchorID:(id)a0;
- (void)collectStrategyInfo:(id)a0;
- (void)processVideoAudioEffect;
- (void)setStrategySRTypeIfNeededWithCallTrace:(id)a0;
- (void)updateSuperResolutionSwitchIfNeeded;
- (void)pe_commonInit;
- (void)pe_stopWithCallTrace:(id)a0;
- (void)pe_closeWithCallTrace:(id)a0;
- (void)pe_orientationTransitionEnd:(long long)a0;
- (void).cxx_destruct;

@end
