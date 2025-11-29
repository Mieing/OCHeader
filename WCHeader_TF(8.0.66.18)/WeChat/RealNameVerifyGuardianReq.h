@class BaseRequest, NSString;

@interface RealNameVerifyGuardianReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *guardianUserName;
@property (retain, nonatomic) NSString *underAgeSessionId;
@property (retain, nonatomic) NSString *leaveMessage;

+ (void)initialize;

@end
