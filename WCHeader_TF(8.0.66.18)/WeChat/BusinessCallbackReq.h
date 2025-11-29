@class BaseRequest, NSString;

@interface BusinessCallbackReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *transferBillId;
@property (retain, nonatomic) NSString *transactionId;

+ (void)initialize;

@end
