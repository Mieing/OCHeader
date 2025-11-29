@interface AWEIMGroupIncentiveChatF2FPopMangoRewardComponent : AWEIMComponentBase <AWEIMIncentiveChatServiceMessage>

@property (nonatomic) BOOL needListenExtChangeAndTryShowMangoReward;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)groupConversationIsUpdateWithCon:(id)a0;
- (void)p_tryPopMangoReward;
- (void)dealloc;

@end
