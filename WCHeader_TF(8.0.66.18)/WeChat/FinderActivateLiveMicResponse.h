@class BaseResponse;

@interface FinderActivateLiveMicResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int abnormal;
@property (nonatomic) unsigned long long heartbeatInterval;

+ (void)initialize;

@end
