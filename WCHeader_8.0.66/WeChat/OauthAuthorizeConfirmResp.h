@class NSString, BaseResponse;

@interface OauthAuthorizeConfirmResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *redirectUrl;

+ (void)initialize;

@end
