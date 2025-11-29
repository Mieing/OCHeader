@class BaseRequest, NSString;

@interface WeVisEffectConfigRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int sdkVersion;
@property (retain, nonatomic) NSString *deviceModelName;
@property (nonatomic) unsigned int wechatArch;
@property (nonatomic) unsigned int resolution;

+ (void)initialize;

- (void)setResolution:(unsigned int)a0;
- (unsigned int)resolution;
- (void)setWechatArch:(unsigned int)a0;
- (unsigned int)wechatArch;
- (void)setDeviceModelName:(id)a0;
- (id)deviceModelName;
- (void)setSdkVersion:(unsigned int)a0;
- (unsigned int)sdkVersion;
- (void)setBaseRequest:(id)a0;
- (id)baseRequest;

@end
