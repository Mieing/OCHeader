@class NSString, AuthorizeUserIDBaseResponse, BaseResponse;

@interface SendSmsResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) AuthorizeUserIDBaseResponse *authBaseResponse;
@property (retain, nonatomic) NSString *verifyToken;

+ (void)initialize;

@end
