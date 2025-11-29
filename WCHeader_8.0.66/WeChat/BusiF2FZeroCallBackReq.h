@class AfterPlaceOrderCommReq, BaseRequest, TokeMess, NSString;

@interface BusiF2FZeroCallBackReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) TokeMess *tockMess;
@property (retain, nonatomic) AfterPlaceOrderCommReq *afterPlaceorderCommReq;
@property (retain, nonatomic) NSString *zeroPayExtend;
@property (nonatomic) unsigned int fromTryFlag;
@property (retain, nonatomic) NSString *token;

+ (void)initialize;

@end
