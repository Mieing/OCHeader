@class BaseRequest, HardDevice, HardDeviceMsg, SKBuiltinBuffer_t;

@interface SendHardDeviceMsgRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) HardDevice *hardDevice;
@property (retain, nonatomic) HardDeviceMsg *hardDeviceMsg;
@property (retain, nonatomic) SKBuiltinBuffer_t *sessionBuffer;

+ (void)initialize;

@end
