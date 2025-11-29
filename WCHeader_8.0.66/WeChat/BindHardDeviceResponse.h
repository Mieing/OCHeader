@class HardDevice, HardDeviceAttr, BaseResponse;

@interface BindHardDeviceResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) HardDevice *hardDevice;
@property (retain, nonatomic) HardDeviceAttr *hardDeviceAttr;
@property (nonatomic) unsigned int flag;

+ (void)initialize;

@end
