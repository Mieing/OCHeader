@class BaseRequest, NSString;

@interface AddPlanReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned long long amount;
@property (retain, nonatomic) NSString *bankType;
@property (retain, nonatomic) NSString *cardTail;
@property (retain, nonatomic) NSString *bindSerialNo;
@property (nonatomic) unsigned int day;
@property (retain, nonatomic) NSString *wxpEncPasswd;
@property (nonatomic) unsigned int usrPlanId;

+ (void)initialize;

@end
