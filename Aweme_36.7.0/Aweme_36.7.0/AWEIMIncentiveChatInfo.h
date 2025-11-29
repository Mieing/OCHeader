@class AWEIMIncentiveChatCellConf, AWEIMIncentiveChatMangoActivityInfo, NSArray, NSString, AWEIMIncentiveChatIdentity, AWEIMIncentiveChatActivityInfo, NSDictionary, AWEIMIncentiveChatUIConf;

@interface AWEIMIncentiveChatInfo : NSObject <AWEIMIncentiveChatInfoProtocol>

@property (retain, nonatomic) AWEIMIncentiveChatCellConf *cellConf;
@property (retain, nonatomic) AWEIMIncentiveChatUIConf *uiConf;
@property (retain, nonatomic) AWEIMIncentiveChatActivityInfo *privateActivityInfo;
@property (retain, nonatomic) AWEIMIncentiveChatActivityInfo *groupActivityInfo;
@property (retain, nonatomic) AWEIMIncentiveChatIdentity *privateChatIdentity;
@property (retain, nonatomic) AWEIMIncentiveChatIdentity *groupChatIdentity;
@property (copy, nonatomic) NSDictionary *incentiveTasks;
@property (nonatomic) BOOL hasTopWithdrawEntery;
@property (retain, nonatomic) AWEIMIncentiveChatMangoActivityInfo *mangoActivityInfo;
@property (nonatomic) BOOL hasParticipatedGroupActivity;
@property (copy, nonatomic) NSArray *availableGroupRemoteChat;
@property (copy, nonatomic) NSDictionary *pendantInfo;
@property (copy, nonatomic) NSDictionary *rawDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDictionary:(id)a0 loginUid:(id)a1;
- (void).cxx_destruct;

@end
