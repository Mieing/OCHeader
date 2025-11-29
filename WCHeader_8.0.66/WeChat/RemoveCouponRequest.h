@class BaseRequest, NSString;

@interface RemoveCouponRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *userCardId;

+ (void)initialize;

@end
