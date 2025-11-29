@class BaseRequest, NSString;

@interface VerifyBeaconJSPermissionRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *ticket;

+ (void)initialize;

@end
