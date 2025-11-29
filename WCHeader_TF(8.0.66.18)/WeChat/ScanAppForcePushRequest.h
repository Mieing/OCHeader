@class BaseRequest, NSString;

@interface ScanAppForcePushRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *qrCode;

+ (void)initialize;

@end
