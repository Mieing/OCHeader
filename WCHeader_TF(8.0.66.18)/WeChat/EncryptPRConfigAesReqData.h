@class BaseRequest, PRConfigRequest;

@interface EncryptPRConfigAesReqData : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) PRConfigRequest *prconfigReq;

+ (void)initialize;

@end
