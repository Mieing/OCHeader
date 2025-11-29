@class BaseRequest, NSString;

@interface WxaModVoipDeviceAuthReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *modelId;
@property (retain, nonatomic) NSString *sn;
@property (nonatomic) unsigned int status;

+ (void)initialize;

@end
