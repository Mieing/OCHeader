@class BaseRequest, NSString;

@interface GetSubscriptionInfoRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *productId;
@property (retain, nonatomic) NSString *reportSessionId;
@property (retain, nonatomic) NSString *sdkVersion;

+ (void)initialize;

@end
