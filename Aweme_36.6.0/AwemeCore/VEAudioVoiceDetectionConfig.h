@class NSString;

@interface VEAudioVoiceDetectionConfig : IESMMAudioEffectConfig

@property (copy, nonatomic) NSString *modelPath;

- (id)toDicInfo;
- (void)setupDefaultValues;
- (void).cxx_destruct;

@end
