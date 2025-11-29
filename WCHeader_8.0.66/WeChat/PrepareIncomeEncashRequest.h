@class BaseRequest, NSString;

@interface PrepareIncomeEncashRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *requestId;
@property (nonatomic) unsigned long long amount;
@property (nonatomic) unsigned int businessId;
@property (retain, nonatomic) NSString *reportSessionId;

+ (void)initialize;

@end
