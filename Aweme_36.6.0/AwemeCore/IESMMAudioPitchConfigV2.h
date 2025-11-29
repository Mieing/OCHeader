@class NSString;

@interface IESMMAudioPitchConfigV2 : IESMMAudioEffectConfig

@property (copy, nonatomic) NSString *effectPath;
@property (copy, nonatomic) NSString *infoData;
@property (nonatomic) int sampleRate;
@property (nonatomic) int channel;

- (id)toDicInfo;
- (void)setupDefaultValues;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
