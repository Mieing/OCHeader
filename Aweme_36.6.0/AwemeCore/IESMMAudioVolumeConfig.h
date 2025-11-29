@class IESMMKeyFrameInfo, IESKeyframeTimeAndCountInfo;

@interface IESMMAudioVolumeConfig : IESMMAudioEffectConfig

@property (nonatomic) double volume;
@property (nonatomic) double keyframeAudioVolume;
@property (nonatomic) BOOL needUsekeyframeAudioVolume;
@property (retain, nonatomic) IESMMKeyFrameInfo *audioFilterVolumnFrameInfo;
@property (retain, nonatomic) IESKeyframeTimeAndCountInfo *audiokeyframeCountAndInfo;
@property (nonatomic) BOOL multiClipEffected;

- (id)toDicInfo;
- (void)setupDefaultValues;
- (void).cxx_destruct;
- (id)description;

@end
