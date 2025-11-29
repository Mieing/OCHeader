@class BaseRequest, NSString;

@interface GetIncomePageInfoRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *reportSessionId;

+ (void)initialize;

@end
