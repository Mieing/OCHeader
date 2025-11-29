@class NSString, NSDictionary, AWEIMIncentiveChatBagTask;

@interface AWEIMIncentiveChatSendPrivateChatInviteConfig : NSObject

@property (copy, nonatomic) NSString *inviterUid;
@property (copy, nonatomic) NSString *inviteeUid;
@property (nonatomic) unsigned long long inviteType;
@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) AWEIMIncentiveChatBagTask *bagTask;
@property (copy, nonatomic) NSDictionary *trackDict;
@property (copy, nonatomic) NSString *inviterDevicePlatform;
@property (copy, nonatomic) NSString *secActivityInfo;
@property (nonatomic) double clickTime;

- (void).cxx_destruct;

@end
