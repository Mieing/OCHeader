@class NSString, BaseResponse;

@interface SnsGenAiImageResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int nextQueryInterval;
@property (nonatomic) unsigned int maxRetryTimes;
@property (retain, nonatomic) NSString *taskId;

+ (void)initialize;

@end
