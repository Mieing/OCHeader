@class ModContact, NSString, HardDeviceAttr, HardDevice, BaseResponse;

@interface SearchBLEHardDeviceResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) HardDevice *hardDevice;
@property (retain, nonatomic) HardDeviceAttr *hardDeviceAttr;
@property (retain, nonatomic) NSString *bindTicket;
@property (retain, nonatomic) ModContact *contact;

+ (void)initialize;

@end
