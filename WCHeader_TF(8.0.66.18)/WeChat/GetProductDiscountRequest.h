@class BaseRequest, NSString;

@interface GetProductDiscountRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *lockId;
@property (retain, nonatomic) NSString *url;

+ (void)initialize;

@end
