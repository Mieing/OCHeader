@class BaseRequest, NSString;

@interface SearchHardDeviceRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *hardDeviceQrcode;

+ (void)initialize;

@end
