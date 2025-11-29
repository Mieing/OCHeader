@class BaseResponse;

@interface PardusPreSearchResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int cacheExpireTime;

+ (void)initialize;

@end
