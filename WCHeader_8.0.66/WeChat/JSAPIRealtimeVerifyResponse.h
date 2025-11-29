@class JSAPIBaseResponse, VerifyInfo, BaseResponse;

@interface JSAPIRealtimeVerifyResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) JSAPIBaseResponse *jsapiBaseresponse;
@property (retain, nonatomic) VerifyInfo *verifyInfo;

+ (void)initialize;

@end
