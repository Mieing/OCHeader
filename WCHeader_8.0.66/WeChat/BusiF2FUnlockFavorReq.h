@class BaseRequest, AfterPlaceOrderCommReq, NSString;

@interface BusiF2FUnlockFavorReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) AfterPlaceOrderCommReq *afterPlaceorderCommReq;
@property (retain, nonatomic) NSString *unlockFavorExtend;

+ (void)initialize;

@end
