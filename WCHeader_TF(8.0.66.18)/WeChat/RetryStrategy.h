@class RetryExtraParam;

@interface RetryStrategy : WXPBGeneratedMessage

@property (nonatomic) unsigned int delayMs;
@property (retain, nonatomic) RetryExtraParam *retryExtraParam;

+ (void)initialize;

@end
