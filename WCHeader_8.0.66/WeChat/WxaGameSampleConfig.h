@interface WxaGameSampleConfig : WXPBGeneratedMessage

@property (nonatomic) unsigned int sampleType;
@property (nonatomic) unsigned int sampleIntervalInSeconds;
@property (nonatomic) unsigned int fpsLagWindowSize;
@property (nonatomic) unsigned int fpsLagWindowDiff;
@property (nonatomic) unsigned int fpsLowThreshold;

+ (void)initialize;

@end
