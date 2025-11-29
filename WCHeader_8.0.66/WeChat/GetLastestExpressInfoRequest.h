@class BaseRequest, NSString, Address;

@interface GetLastestExpressInfoRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *productId;
@property (retain, nonatomic) NSString *lockId;
@property (retain, nonatomic) Address *address;

+ (void)initialize;

@end
