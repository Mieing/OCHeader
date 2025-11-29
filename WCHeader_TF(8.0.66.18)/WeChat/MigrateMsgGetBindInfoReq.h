@class BaseRequest, NSString;

@interface MigrateMsgGetBindInfoReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *qrcode;

+ (void)initialize;

@end
