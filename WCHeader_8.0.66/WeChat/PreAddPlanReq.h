@class BaseRequest;

@interface PreAddPlanReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int usrPlanId;

+ (void)initialize;

@end
