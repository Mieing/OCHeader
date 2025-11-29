@class BaseResponse, NSString, HardDeviceAttr, HardDevice, AirKissConfData, ModContact;

@interface SearchHardDeviceResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) ModContact *contact;
@property (retain, nonatomic) HardDevice *hardDevice;
@property (retain, nonatomic) HardDeviceAttr *hardDeviceAttr;
@property (retain, nonatomic) NSString *bindTicket;
@property (nonatomic) unsigned int fliterStatus;
@property (retain, nonatomic) AirKissConfData *conf;

+ (void)initialize;

@end
