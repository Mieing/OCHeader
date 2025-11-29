@class BaseRequest, NSString;

@interface SubAppForcePushRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *qrCode;

+ (void)initialize;

@end
