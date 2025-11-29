@class NSString, PayJsApiAuthenPageMsgInfo, BaseResponse;

@interface CheckPayJsapiResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) int errCode;
@property (retain, nonatomic) NSString *errMsg;
@property (retain, nonatomic) NSString *token;
@property (retain, nonatomic) PayJsApiAuthenPageMsgInfo *payJsapiAuthenPageMsgItem;
@property (retain, nonatomic) NSString *jsApiReqKey;
@property (nonatomic) BOOL canPassPwd;
@property (retain, nonatomic) NSString *usertoken;
@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSString *scene;

+ (void)initialize;

@end
