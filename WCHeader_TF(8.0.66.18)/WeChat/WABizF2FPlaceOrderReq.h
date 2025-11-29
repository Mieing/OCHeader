@class BaseRequest, NSString;

@interface WABizF2FPlaceOrderReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *outPrepayId;
@property (nonatomic) unsigned long long totalAmount;

+ (void)initialize;

@end
