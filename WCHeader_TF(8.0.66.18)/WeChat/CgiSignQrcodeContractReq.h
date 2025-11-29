@class BaseRequest;

@interface CgiSignQrcodeContractReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int qrcodeContractVersion;

+ (void)initialize;

@end
