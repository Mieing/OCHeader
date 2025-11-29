@class BaseRequest, NSString;

@interface WxaAppGetAuthInfoReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *appid;
@property (nonatomic) unsigned int extFlag;

+ (void)initialize;

@end
