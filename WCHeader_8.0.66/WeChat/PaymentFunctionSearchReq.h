@class BaseRequest, NSString;

@interface PaymentFunctionSearchReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *keyWord;

+ (void)initialize;

@end
