@class HardDevice, NSString;

@interface GetHardDeviceOperTicketResult : WXPBGeneratedMessage

@property (nonatomic) int ret;
@property (retain, nonatomic) HardDevice *device;
@property (retain, nonatomic) NSString *ticket;
@property (nonatomic) unsigned int oper;

+ (void)initialize;

@end
