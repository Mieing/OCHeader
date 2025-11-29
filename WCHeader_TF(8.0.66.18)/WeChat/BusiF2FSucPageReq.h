@class BaseRequest, AfterPlaceOrderCommReq, NSString;

@interface BusiF2FSucPageReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) AfterPlaceOrderCommReq *afterPlaceorderCommReq;
@property (retain, nonatomic) NSString *sucPageExtend;
@property (nonatomic) unsigned int faultFlag;
@property (nonatomic) unsigned int faultRetryCnt;
@property (nonatomic) unsigned long long faultRetryClientTime;

+ (void)initialize;

@end
