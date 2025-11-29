@class NSString, NSMutableArray;

@interface PreviewArchiveResponse : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *taskId;
@property (nonatomic) int status;
@property (retain, nonatomic) NSString *message;
@property (nonatomic) int limitedBy;
@property (nonatomic) unsigned int progress;
@property (retain, nonatomic) NSMutableArray *files;
@property (nonatomic) unsigned int retryInterval;
@property (nonatomic) unsigned int maxRetryTimes;
@property (retain, nonatomic) NSString *version;

+ (void)initialize;

@end
