@interface SnsVideoOptions : WXPBGeneratedMessage

@property (nonatomic) int bitRateMode;
@property (nonatomic) int ruleDurationAndProbabilityEnabled;
@property (nonatomic) int forceDefaultModeVideoDuration;
@property (nonatomic) int forceDefaultModeMaxProbability;
@property (nonatomic) int predictionTimeoutInMs;

+ (void)initialize;

- (void)setPredictionTimeoutInMs:(int)a0;
- (int)predictionTimeoutInMs;
- (void)setForceDefaultModeMaxProbability:(int)a0;
- (int)forceDefaultModeMaxProbability;
- (void)setForceDefaultModeVideoDuration:(int)a0;
- (int)forceDefaultModeVideoDuration;
- (void)setRuleDurationAndProbabilityEnabled:(int)a0;
- (int)ruleDurationAndProbabilityEnabled;
- (void)setBitRateMode:(int)a0;
- (int)bitRateMode;

@end
