@class BaseRequest, NSString;

@interface EcCustomerGetOrderInfoReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *orderId;

+ (void)initialize;

@end
