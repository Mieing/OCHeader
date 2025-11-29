@class BaseRequest, NSString;

@interface SendSubscriptionMsgReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *wxaUsername;
@property (retain, nonatomic) NSString *uxinfo;
@property (nonatomic) unsigned long long aid;
@property (retain, nonatomic) NSString *appType;

+ (void)initialize;

@end
