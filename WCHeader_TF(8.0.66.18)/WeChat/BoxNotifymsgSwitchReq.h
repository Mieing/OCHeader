@class IamBizBaseRequest, NSString;

@interface BoxNotifymsgSwitchReq : WXPBGeneratedMessage

@property (retain, nonatomic) IamBizBaseRequest *baseRequest;
@property (retain, nonatomic) NSString *action;
@property (retain, nonatomic) NSString *notifymsgKey;
@property (nonatomic) unsigned int status;

+ (void)initialize;

@end
