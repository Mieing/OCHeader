@interface BusiF2FFaultConfig : WXPBGeneratedMessage

@property (nonatomic) unsigned int flag;
@property (nonatomic) unsigned int succpageFirstDelayMs;
@property (nonatomic) unsigned int succpageMaxRetryCnt;
@property (nonatomic) unsigned int succpageRetryWaitingMs;

+ (void)initialize;

@end
