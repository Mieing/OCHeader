@class BaseResponse;

@interface SendVerifyCodeResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) int status;

+ (void)initialize;

@end
