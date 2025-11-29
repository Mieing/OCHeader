@class NSString;

@interface AWEIMChatListConsecutiveChatDaysHintProvider : NSObject <IESIMChatListConsecutiveChatDaysHintInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)currentStreakInfoModelWithSharedSyncedExt:(id)a0;
+ (id)preferredModelWithCon:(id)a0;
+ (id)sharedInstance;

- (long long)checkConsecutiveChatIsRecoveryWithConversation:(id)a0 peerUser:(id)a1 hours:(long long)a2;
- (BOOL)didConsecutiveChatTodayOnConversation:(id)a0 peerUser:(id)a1;
- (long long)chatDaysOnConversation:(id)a0 peerUser:(id)a1;
- (BOOL)isShowingFireOnConversation:(id)a0 withPeerUser:(id)a1;
- (id)chatLevelWithConversation:(id)a0;
- (BOOL)shouldShowPreLevelWithConType:(unsigned long long)a0 sharedSyncedExt:(id)a1 peerUser:(id)a2 conversation:(id)a3;
- (BOOL)shouldShowPreLevelInNewFriendLevelCanNotShowPlaceWithConType:(unsigned long long)a0 sharedSyncedExt:(id)a1 peerUser:(id)a2;
- (id)p_preLevelWithSharedSyncedExt:(id)a0;
- (BOOL)shouldShowPreLevelFollowUserConsecutiveChatDaysSwitchWithPreLevelString:(id)a0;
- (BOOL)isActivePreLevelWithConType:(unsigned long long)a0 sharedSyncedExt:(id)a1 peerUser:(id)a2;
- (BOOL)p_isActivePreLevelWithSharedSyncedExt:(id)a0 isSingleConversation:(BOOL)a1;
- (long long)chatDaysOnConversation:(id)a0 peerUser:(id)a1 ignoreDisplaySwitch:(BOOL)a2;
- (long long)chatDaysWithConType:(unsigned long long)a0 sharedSyncedExt:(id)a1 peerUser:(id)a2 conversation:(id)a3 ignoreDisplaySwitch:(BOOL)a4;
- (long long)p_chatDayWithSharedSyncedExt:(id)a0;
- (BOOL)p_checkIsValidChatDayForSingleConversationWithPeerUser:(id)a0 sharedSyncedExt:(id)a1;
- (BOOL)isRecoveryDateWithSharedSyncedExt:(id)a0;
- (BOOL)p_didConsecutiveChatTodayWithSharedSyncedExt:(id)a0 isSingleConversation:(BOOL)a1 conversation:(id)a2 peerUser:(id)a3;
- (BOOL)didConsecutiveChatTodayWithConType:(unsigned long long)a0 sharedSyncedExt:(id)a1 peerUser:(id)a2 conversation:(id)a3;
- (BOOL)p_didConsecutiveChatTodayWithConversation:(id)a0 peerUser:(id)a1;
- (id)chatLevelWithSharedSyncedExt:(id)a0;
- (id)p_levelFilterWithValue:(id)a0;
- (id)chatLevelContainDisableStatusWithSharedSyncedExt:(id)a0 isActive:(BOOL)a1;
- (BOOL)isShowingColorfulFireOnConversation:(id)a0 withPeerUser:(id)a1;
- (long long)chatDaysWithConType:(unsigned long long)a0 sharedSyncedExt:(id)a1 peerUser:(id)a2 conversation:(id)a3;
- (BOOL)didConsecutiveChatTodayWithPeerUser:(id)a0 sharedSyncedExt:(id)a1 conversation:(id)a2;
- (BOOL)isConversationInCompletelyEndConsecutiveChatOnConversation:(id)a0;
- (id)chatLevelContainDisableStatusWithConversation:(id)a0 isActive:(BOOL)a1;
- (BOOL)isRecoveryDateWithConversation:(id)a0;
- (BOOL)shouldShowPreLevelExceptMessageTabAndChatPageWithConTypeWithModelType:(unsigned long long)a0 sharedSyncedExt:(id)a1 peerUser:(id)a2 conversation:(id)a3;
- (BOOL)shouldShowPreLevelOnConversation:(id)a0 peerUser:(id)a1;
- (BOOL)isActivePreLevelOnConversation:(id)a0 peerUser:(id)a1;
- (id)chatPreLevelWithSharedSyncedExt:(id)a0;
- (void)uploadConsecutiveChatStateWithConversation:(id)a0 scene:(id)a1;
- (BOOL)checkConsecutiveChatWillVanishWithConversation:(id)a0 peerUser:(id)a1 hours:(long long)a2;
- (long long)getConsecutiveChatExpireTimeWithNewExpireTime:(long long)a0 oldExpireTime:(long long)a1;
- (BOOL)p_checkIsValidChatDayForSingleConversationWithPeerUser:(id)a0 conversation:(id)a1;
- (BOOL)p_didConsecutiveChatTodayOnConversation:(id)a0 peerUser:(id)a1;
- (double)getCurrentTime;

@end
