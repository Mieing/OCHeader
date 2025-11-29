@class BaseRequest, NSString;

@interface WABizF2FRequestPaymentReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *outPrepayId;

+ (void)initialize;

@end
