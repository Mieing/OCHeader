@class NSString, AuthorizeUserIDBaseResponse, BaseResponse;

@interface VerifySmsCodeResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) AuthorizeUserIDBaseResponse *authBaseResponse;
@property (retain, nonatomic) NSString *authToken;

+ (void)initialize;

@end
