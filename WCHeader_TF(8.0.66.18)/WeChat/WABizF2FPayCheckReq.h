@class BaseRequest, WABizF2FAfterPlaceOrderCommReq;

@interface WABizF2FPayCheckReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) WABizF2FAfterPlaceOrderCommReq *afterPlaceorderCommReq;

+ (void)initialize;

@end
