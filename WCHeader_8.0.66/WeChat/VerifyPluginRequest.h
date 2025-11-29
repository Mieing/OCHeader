@class BaseRequest, NSString;

@interface VerifyPluginRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *extInfo;

+ (void)initialize;

@end
