@class NSString, HardDevice, ModContact;

@interface BatchSearchHardDeviceResult : WXPBGeneratedMessage

@property (nonatomic) unsigned int ret;
@property (retain, nonatomic) NSString *bindTicket;
@property (retain, nonatomic) ModContact *contact;
@property (retain, nonatomic) NSString *mac;
@property (retain, nonatomic) NSString *deviceName;
@property (retain, nonatomic) HardDevice *device;

+ (void)initialize;

@end
