@class BaseRequest, HardDevice, SKBuiltinBuffer_t;

@interface HardDeviceAuthRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) HardDevice *hardDevice;
@property (nonatomic) unsigned int authVer;
@property (retain, nonatomic) SKBuiltinBuffer_t *authBuffer;

+ (void)initialize;

@end
