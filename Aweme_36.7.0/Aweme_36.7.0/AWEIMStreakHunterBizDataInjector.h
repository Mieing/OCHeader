@interface AWEIMStreakHunterBizDataInjector : NSObject

+ (id)sharedInstance;

- (id)petElfInviteIMHunterClientDataWithConversation:(id)a0 message:(id)a1;
- (id)petElfInviteIMHunterServerDataWithConversation:(id)a0;
- (void)registerStreakBizDataInjection;
- (id)achievementIMHunterClientDataWithConversation:(id)a0;
- (id)achievementIMHunterServerDataWithConversation:(id)a0;
- (BOOL)enableAchievePreInjectWithCon:(id)a0;
- (BOOL)hasSendInviteRaisePetElfWithCardInfoDict:(id)a0;
- (void)p_updateSenderWithMsg:(id)a0 extraDict:(id)a1;
- (BOOL)isValidInviteStatusWithConversation:(id)a0 peerUser:(id)a1;
- (id)init;

@end
