@class BaseRequest, NSString;

@interface ManagePlanReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned int usrPlanId;
@property (retain, nonatomic) NSString *wxpEncPasswd;

+ (void)initialize;

@end
