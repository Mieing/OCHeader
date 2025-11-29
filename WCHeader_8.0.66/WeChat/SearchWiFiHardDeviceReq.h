@class BaseRequest, HardDevice, NSString;

@interface SearchWiFiHardDeviceReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) HardDevice *hardDevice;
@property (retain, nonatomic) NSString *extraParams;

+ (void)initialize;

@end
