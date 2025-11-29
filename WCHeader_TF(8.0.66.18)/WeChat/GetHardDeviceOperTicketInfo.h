@class HardDevice;

@interface GetHardDeviceOperTicketInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int oper;
@property (nonatomic) unsigned int sence;
@property (retain, nonatomic) HardDevice *device;

+ (void)initialize;

@end
