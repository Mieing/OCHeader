@class BaseRequest, NSString;

@interface CancelWecoinRechargeRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *billNo;
@property (retain, nonatomic) NSString *reportSessionId;

+ (void)initialize;

@end
