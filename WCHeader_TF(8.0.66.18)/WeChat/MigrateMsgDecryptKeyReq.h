@class BaseRequest, NSString;

@interface MigrateMsgDecryptKeyReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *qrcode;

+ (void)initialize;

@end
