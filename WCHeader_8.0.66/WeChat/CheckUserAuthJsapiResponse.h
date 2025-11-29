@class PayJsApiAuthenPageMsgInfo, NSString, TouchInfo, BaseResponse;

@interface CheckUserAuthJsapiResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) int errCode;
@property (retain, nonatomic) NSString *errMsg;
@property (retain, nonatomic) NSString *token;
@property (retain, nonatomic) PayJsApiAuthenPageMsgInfo *payJsapiVerifyPaypasswordPageMsg;
@property (retain, nonatomic) NSString *jsApiReqKey;
@property (retain, nonatomic) TouchInfo *touchInfo;

+ (void)initialize;

@end
