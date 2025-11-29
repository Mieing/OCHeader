@class BaseRequest, NSString;

@interface GetIncomeBalanceRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *reportSessionId;

+ (void)initialize;

@end
