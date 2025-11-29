@class BaseRequest, NSString;

@interface VerifyParentReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *parentUserName;
@property (nonatomic) unsigned long long applymentId;
@property (retain, nonatomic) NSString *leaveMessage;

+ (void)initialize;

@end
