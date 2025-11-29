@interface IESMMAudioFadeConfig : IESMMAudioEffectConfig

@property (nonatomic) double fadeInDuration;
@property (nonatomic) double fadeOutDuration;
@property (nonatomic) double fadeOffset;
@property (nonatomic) double fadeOutOffset;
@property (nonatomic) long long fadeInCurve;
@property (nonatomic) long long fadeOutCurve;

- (id)toDicInfo;
- (void)setupDefaultValues;

@end
