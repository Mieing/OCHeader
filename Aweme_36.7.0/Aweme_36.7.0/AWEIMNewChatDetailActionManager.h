@interface AWEIMNewChatDetailActionManager : NSObject

+ (void)doActionGroupNumberWithConversation:(id)a0 completeBlock:(id /* block */)a1;
+ (void)cleanAllMessageForConversation:(id)a0 completeBlock:(id /* block */)a1;
+ (void)doAction:(unsigned long long)a0 withContext:(id)a1 actionParams:(id)a2 completeBlock:(id /* block */)a3;
+ (id)p_getActionDescrib:(unsigned long long)a0;
+ (void)doShowSetGroupNickPanelWithContext:(id)a0 actionParams:(id)a1;
+ (void)doShowSetGroupNamePanelWithContext:(id)a0;
+ (void)doChangeGroupAvatarWithoutCheckWithContext:(id)a0 completeBlock:(id /* block */)a1;
+ (void)doShowSearchHistoryMessagePanelWithContext:(id)a0;
+ (void)doReportActionWithContext:(id)a0;
+ (void)doShowSetGroupDescPanelWithContext:(id)a0;
+ (void)doShareGroupActionWithConversation:(id)a0 ext:(id)a1;
+ (void)p_showShareCommandWithType:(long long)a0 enterMethod:(id)a1 enterFrom:(id)a2 conversationID:(id)a3 ext:(id)a4;
+ (BOOL)canShowGroupNumberForCon:(id)a0;
+ (void)doActionGroupNumberNewWithConversation:(id)a0 completeBlock:(id /* block */)a1;
+ (void)pasteboardCopyForGroupNumber:(id)a0;
+ (void)p_trackEventOnGroupNumberWithName:(id)a0 conversation:(id)a1;
+ (void)fetchGroupNumberConversation:(id)a0 result:(id /* block */)a1;
+ (void)p_showSetNickPanelWithType:(unsigned long long)a0 context:(id)a1 actionParams:(id)a2 completeBlock:(id /* block */)a3;
+ (void)p_trackGroupNickClickWithConversation:(id)a0 inMoreSettings:(BOOL)a1;
+ (void)p_trackChatReportClickWithConversation:(id)a0;
+ (void)p_trackChatDetailHistoryClickWithConversation:(id)a0;
+ (void)p_unfollowUser:(id)a0 completion:(id /* block */)a1;
+ (void)p_trackGroupShareQRCode:(id)a0 showGroupNumber:(BOOL)a1;
+ (void)doAction:(unsigned long long)a0 withContext:(id)a1;
+ (void)doAction:(unsigned long long)a0 withContext:(id)a1 completeBlock:(id /* block */)a2;
+ (void)cleanAllMessageForConversationContext:(id)a0 completeBlock:(id /* block */)a1;
+ (void)doShareGroupActionWithConversation:(id)a0;
+ (void)p_showShareCommandWithType:(long long)a0 enterMethod:(id)a1 enterFrom:(id)a2 conversationID:(id)a3;
+ (BOOL)enableChangeGroupNameAndChangeAvatarWithConversation:(id)a0;
+ (void)setupAvatarImageWithView:(id)a0 WithContext:(id)a1;
+ (void)doChangeFollowStatusActionWithUser:(id)a0 conversation:(id)a1 completion:(id /* block */)a2;
+ (void)showQRCodeWithConversation:(id)a0 withGroupNumber:(BOOL)a1;

@end
