@class BaseRequest;

@interface QryAutoPlanOrderListReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned long long usrPlanId;
@property (nonatomic) unsigned long long offset;
@property (nonatomic) unsigned long long limit;

+ (void)initialize;

@end
