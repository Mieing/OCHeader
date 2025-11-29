@class BaseRequest, NSString;

@interface WeVisDeviceModelConfigRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int sdkVersion;
@property (retain, nonatomic) NSString *deviceModelName;
@property (nonatomic) unsigned int wechatArch;

+ (void)initialize;

@end
