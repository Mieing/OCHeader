@class BaseRequest, NSString;

@interface AgreeTeenagerModeAuthorizationReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *wardUserName;
@property (retain, nonatomic) NSString *businessKey;
@property (nonatomic) unsigned int businessType;
@property (nonatomic) unsigned long long requestAuthorizationMsgId;

+ (void)initialize;

@end
