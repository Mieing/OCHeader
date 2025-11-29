@class BaseRequest, NSString;

@interface MerchantPayPlaceOrderReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *scanId;
@property (nonatomic) unsigned long long totalAmount;
@property (retain, nonatomic) NSString *payerRemark;
@property (retain, nonatomic) NSString *clientIp;
@property (retain, nonatomic) NSString *qrcodeSenderUsername;

+ (void)initialize;

@end
