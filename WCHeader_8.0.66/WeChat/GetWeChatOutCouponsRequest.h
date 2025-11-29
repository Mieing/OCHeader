@class BaseRequest;

@interface GetWeChatOutCouponsRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int rechargeWordingVersion;
@property (nonatomic) unsigned int accountActivityWordingVersion;

+ (void)initialize;

@end
