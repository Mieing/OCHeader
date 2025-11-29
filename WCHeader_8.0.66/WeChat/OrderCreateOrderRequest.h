@class BaseRequest, NSString, EXTPKG_mmpayapplynfccardbo_DeviceInfo;

@interface OrderCreateOrderRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *cardType;
@property (retain, nonatomic) NSString *fpanId;
@property (nonatomic) int orderType;
@property (nonatomic) long long orderAmount;
@property (retain, nonatomic) EXTPKG_mmpayapplynfccardbo_DeviceInfo *deviceInfo;
@property (retain, nonatomic) NSString *appid;
@property (nonatomic) long long applyAmount;

+ (void)initialize;

@end
