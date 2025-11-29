@class BaseResponse;

@interface UserCloseRecommendResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) int state;

+ (void)initialize;

@end
