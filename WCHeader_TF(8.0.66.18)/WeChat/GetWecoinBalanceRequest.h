@class BaseRequest, NSString;

@interface GetWecoinBalanceRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *reportSessionId;

+ (void)initialize;

@end
