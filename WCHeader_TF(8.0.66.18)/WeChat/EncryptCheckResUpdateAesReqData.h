@class BaseRequest, CheckResUpdateRequest;

@interface EncryptCheckResUpdateAesReqData : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) CheckResUpdateRequest *checkResUpdateReq;

+ (void)initialize;

@end
