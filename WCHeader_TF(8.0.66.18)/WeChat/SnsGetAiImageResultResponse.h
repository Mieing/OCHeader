@class NSMutableArray, BaseResponse;

@interface SnsGetAiImageResultResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *url;
@property (nonatomic) unsigned int nextQueryInterval;
@property (nonatomic) unsigned int maxRetryTimes;

+ (void)initialize;

@end
