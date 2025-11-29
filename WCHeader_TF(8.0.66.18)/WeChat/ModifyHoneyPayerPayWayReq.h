@class BaseRequest, NSString, PayWay;

@interface ModifyHoneyPayerPayWayReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) PayWay *payWay;
@property (retain, nonatomic) NSString *cardNo;
@property (retain, nonatomic) NSString *selectPaymentSessionid;

+ (void)initialize;

@end
