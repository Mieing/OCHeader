@class NSNumber;
@protocol IESLivePlayerProtocol;

@interface IESLiveVideoAudioStrategyController : NSObject

@property (retain, nonatomic) id<IESLivePlayerProtocol> playerController;
@property (nonatomic) BOOL isPreview;
@property (retain, nonatomic) NSNumber *roomID;
@property (retain, nonatomic) id<IESLivePlayerProtocol> player;

- (void)changeSuperResolutionWithStrategy;
- (void)changeSDR2HDRWithStrategy;
- (void)adjustVolumeEffectTargetLufs;
- (void)choosePlayerSpecifySceneForLOB;
- (void)updateSVCParam;
- (void)adjustWholeVolumeEffectParam;
- (void)changeVideoSharpenStateWithStrategy;
- (void)playerVolumeAdaptive;
- (void)setVideoSharpenLevel;
- (void)setSmoothSwitchState;
- (void)setTTLivePlayerSpeedRange;
- (void)enableAudioStereoPlayback;
- (void)playerAudioChannelExpand;
- (void)setVideoSharpenConfig;
- (void)setVideoSuperResolutionConfig;
- (void)setVideoAesBoostConfig;
- (void)adjustWhole3thVolumeEffectParam;
- (void)adjustPlayerGainParam;
- (void)playerTTAPAudioEnhance;
- (void)updateAudioStereoPlayback:(id)a0;
- (void).cxx_destruct;

@end
