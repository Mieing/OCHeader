@class BaseRequest, NSString;

@interface GetWCOProductListRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *callCountry;
@property (retain, nonatomic) NSString *currency;

+ (void)initialize;

@end
