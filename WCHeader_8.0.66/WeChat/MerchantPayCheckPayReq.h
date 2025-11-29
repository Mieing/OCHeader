@class BaseRequest, NSString;

@interface MerchantPayCheckPayReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *outTradeNo;
@property (nonatomic) int payState;
@property (retain, nonatomic) NSString *scanId;

+ (void)initialize;

@end
