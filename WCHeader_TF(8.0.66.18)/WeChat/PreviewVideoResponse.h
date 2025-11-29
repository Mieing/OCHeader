@class NSString;

@interface PreviewVideoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *taskId;
@property (nonatomic) int status;
@property (nonatomic) unsigned int retryInterval;
@property (nonatomic) unsigned int maxRetryTimes;
@property (retain, nonatomic) NSString *version;

+ (void)initialize;

@end
