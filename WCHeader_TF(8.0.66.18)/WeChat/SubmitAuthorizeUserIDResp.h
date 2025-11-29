@class NSString, AuthorizeUserIDSmsInfo, AuthorizeUserIDBaseResponse, BaseResponse;

@interface SubmitAuthorizeUserIDResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) AuthorizeUserIDBaseResponse *authBaseResponse;
@property (nonatomic) unsigned int authStatus;
@property (retain, nonatomic) AuthorizeUserIDSmsInfo *sms;
@property (retain, nonatomic) NSString *authToken;

+ (void)initialize;

@end
