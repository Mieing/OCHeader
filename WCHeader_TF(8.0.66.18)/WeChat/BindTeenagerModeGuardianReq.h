@class BaseRequest, NSString;

@interface BindTeenagerModeGuardianReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *wardUserName;
@property (retain, nonatomic) NSString *ticket;
@property (nonatomic) unsigned int bindScene;

+ (void)initialize;

@end
