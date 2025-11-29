@interface EcsSamplingPolicy : WXPBGeneratedMessage

@property (nonatomic) unsigned int samplingRate;
@property (nonatomic) unsigned int samplingBase;
@property (nonatomic) int strategy;

+ (void)initialize;

@end
