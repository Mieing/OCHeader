@class BaseRequest, AfterPlaceOrderCommReq, NSString;

@interface BusiF2FPayCheckReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) AfterPlaceOrderCommReq *afterPlaceorderCommReq;
@property (retain, nonatomic) NSString *paycheckExtend;

+ (void)initialize;

@end
