@class NSDictionary, NSString;

@interface AWEIMIncentiveChatUIConf : NSObject

@property (copy, nonatomic) NSDictionary *dictionaryRawData;
@property (copy, nonatomic) NSString *invitePanelSchema;
@property (copy, nonatomic) NSString *taskPanelSchema;
@property (copy, nonatomic) NSString *educationPanelSchema;
@property (copy, nonatomic) NSString *topWalletWithdrawSchema;
@property (copy, nonatomic) NSString *groupChatInvitePanelSchema;
@property (copy, nonatomic) NSString *group7DaysChallengeSchema;
@property (copy, nonatomic) NSString *group7DaysChallengeGuideSchema;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
