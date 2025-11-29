@interface IESMMAudioBalanceConfig : IESMMAudioEffectConfig

@property (nonatomic) float averageLoudness;
@property (nonatomic) float peakLoudness;
@property (nonatomic) float targetLoudness;

- (id)toDicInfo;
- (void)setupDefaultValues;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
