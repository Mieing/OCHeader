@class BaseRequest, NSString;

@interface ModifyPlanReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int usrPlanId;
@property (retain, nonatomic) NSString *bankType;
@property (retain, nonatomic) NSString *cardTail;
@property (retain, nonatomic) NSString *bindSerialNo;
@property (nonatomic) unsigned long long amount;
@property (nonatomic) unsigned int day;
@property (retain, nonatomic) NSString *wxpEncPasswd;

+ (void)initialize;

@end
