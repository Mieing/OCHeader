@interface AWEIMMessageListMixPhotoHandler : NSObject

+ (void)handleGroupActionWithConversation:(id)a0 withContext:(id)a1;
+ (id)p_showMixPhotoPageSheetWithContext:(id)a0;
+ (unsigned long long)__disableOption;
+ (void)__transferToInviteMemberWithConversationID:(id)a0 enterFrom:(id)a1 enterMethod:(id)a2;
+ (void)__transferToCreateGroupWithPeerUserID:(id)a0 enterFrom:(id)a1 enterMethod:(id)a2;
+ (double)__getSuperViewPanelHeight;
+ (void)showMixPhotoPageSheetWithContext:(id)a0;
+ (void)handleInviteMemberTransition:(id)a0;

@end
