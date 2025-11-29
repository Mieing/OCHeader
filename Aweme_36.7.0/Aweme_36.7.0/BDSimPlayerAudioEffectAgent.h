@protocol BDSimAudioBSModel, BDSimPlayModel, BDSimAudioEffectConfiguring, IESVideoPlayerProtocol, BDSimVideoBSModel;

@interface BDSimPlayerAudioEffectAgent : NSObject

@property (retain, nonatomic) id<BDSimVideoBSModel> bsModel;
@property (retain, nonatomic) id<BDSimAudioBSModel> audioBSModel;
@property (retain, nonatomic) id<BDSimPlayModel> model;
@property (weak, nonatomic) id<IESVideoPlayerProtocol> playerController;
@property (retain, nonatomic) id<BDSimAudioEffectConfiguring> bizAudioEffectConfig;

- (void)configDataSource:(id)a0;
- (void)p_handleAudioEffectTypeWithExtraDic:(id)a0;
- (void)p_handleAudioEffectTypeWithMeta;
- (void)p_handleAudioEffectTypeWithVideoExtra;
- (void)p_setAudioEffectV1WithVolumeInfoString:(id)a0;
- (void)p_setAudioEffectV0WithLoudness:(double)a0 peak:(double)a1;
- (void)p_setAudioEffectTargetLoudnessIfNeeded;
- (void)p_handlePlayerAudioEffectIfNeeded;
- (void)configBSModel:(id)a0;
- (void)configAudioBSModel:(id)a0;
- (void)buildPlayer:(id)a0;
- (id)audioExtraDict;
- (void)p_processAudioVolumeExtraInfo;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
