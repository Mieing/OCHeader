@class BaseRequest, NSString;

@interface GetCustomerServiceBannerReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *username;
@property (nonatomic) unsigned int bannerStatus;
@property (nonatomic) unsigned int bannerShowtype;
@property (nonatomic) unsigned int bannerKefuType;

+ (void)initialize;

@end
