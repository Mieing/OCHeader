@class BaseRequest, NSString;

@interface BindOldWxRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *qrcode;

+ (void)initialize;

@end
