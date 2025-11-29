@class BaseRequest, NSString;

@interface DeleteCouponRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *userCardId;

+ (void)initialize;

@end
