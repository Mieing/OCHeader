@class BaseRequest, NSString, EXTPKG_mmpayapplynfccardbo_DeviceInfo;

@interface OrderQueryOrderRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *cardType;
@property (retain, nonatomic) NSString *outTradeNo;
@property (retain, nonatomic) EXTPKG_mmpayapplynfccardbo_DeviceInfo *deviceInfo;
@property (retain, nonatomic) NSString *appid;

+ (void)initialize;

@end
