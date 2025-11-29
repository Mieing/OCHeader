@class BaseRequest, PassKeyVerifyInfo;

@interface VerifyPassKeyForAuthNonLoginRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) PassKeyVerifyInfo *info;
@property (nonatomic) unsigned int scene;

+ (void)initialize;

@end
