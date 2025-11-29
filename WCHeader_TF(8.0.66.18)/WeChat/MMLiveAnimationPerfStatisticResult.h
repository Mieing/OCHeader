@interface MMLiveAnimationPerfStatisticResult : MMLiveUIPerfStatisticResult

@property (nonatomic) float minAnimFrameRate;
@property (nonatomic) float maxAnimFrameRate;
@property (nonatomic) float sumAnimFrameRate;
@property (readonly, nonatomic) float averAnimFrameRate;

- (void)addAnimationPerfRecord:(id)a0;
- (void)addAnimFrameRate:(float)a0;

@end
