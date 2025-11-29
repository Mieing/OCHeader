@class NSString, BaseResponse;

@interface PayIBGCheckJsapiSignResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) int errCode;
@property (retain, nonatomic) NSString *errMsg;

+ (void)initialize;

@end
