@interface IESMMAudioSpeedConfig : IESMMAudioEffectConfig

@property (nonatomic) double speedRate;
@property (nonatomic) BOOL reservePitch;

- (id)toDicInfo;
- (void)setupDefaultValues;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
