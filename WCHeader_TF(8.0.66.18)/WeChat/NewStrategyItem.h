@interface NewStrategyItem : WXPBGeneratedMessage

@property (nonatomic) unsigned int logId;
@property (nonatomic) unsigned int reportCycle;
@property (nonatomic) unsigned int reportFlag;
@property (nonatomic) unsigned int sampleRatio;
@property (nonatomic) unsigned int sampleMode;
@property (nonatomic) unsigned int sampleValidInterval;
@property (nonatomic) unsigned int monitorFlag;
@property (nonatomic) unsigned int type;

+ (void)initialize;

@end
