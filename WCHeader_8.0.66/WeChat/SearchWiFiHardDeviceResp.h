@class BaseResponse, NSString, HardDeviceAttr, HardDevice, ModContact;

@interface SearchWiFiHardDeviceResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) ModContact *contact;
@property (retain, nonatomic) HardDevice *hardDevice;
@property (retain, nonatomic) HardDeviceAttr *hardDeviceAttr;
@property (retain, nonatomic) NSString *bindTicket;

+ (void)initialize;

@end
