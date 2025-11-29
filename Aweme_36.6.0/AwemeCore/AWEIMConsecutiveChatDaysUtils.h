@class NSString;

@interface AWEIMConsecutiveChatDaysUtils : NSObject <AWEIMConsecutiveChatDaysServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)switchEnableConsecutiveChatDisplayWithConversation:(id)a0;
+ (BOOL)enableConsecutiveChatDisplayWithConversation:(id)a0 peerUser:(id)a1;
+ (BOOL)isValidSpecialConsecutiveChatKey:(id)a0;
+ (id)cardConfigWithLevel:(id)a0 isSingle:(BOOL)a1;
+ (long long)checkConsecutiveChatIsRecoveryWithConversation:(id)a0 peerUser:(id)a1 hours:(long long)a2;
+ (id)currentStreakInfoModelWithSharedSyncedExt:(id)a0;
+ (BOOL)checkConsecutiveChatWillVanishWithConversation:(id)a0 peerUser:(id)a1 hours:(long long)a2;
+ (id)getConsecutiveChatFrequencyWithKey:(id)a0;
+ (id)chatDaysTextFormat;
+ (id)sharedInstance;

- (id)streakRecoveryHintTextWithMessage:(id)a0;
- (id)init;

@end
