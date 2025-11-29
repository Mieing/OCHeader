@class BaseRequest, HardDevice;

@interface UnbindHardDeviceRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) HardDevice *hardDevice;
@property (nonatomic) unsigned int flag;

+ (void)initialize;

@end
