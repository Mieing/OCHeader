@class BaseResponse;

@interface CheckPreHotResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) BOOL succ;
@property (nonatomic) unsigned int cacheSeconds;

+ (void)initialize;

@end
