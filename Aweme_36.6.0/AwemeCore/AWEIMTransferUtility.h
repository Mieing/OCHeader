@interface AWEIMTransferUtility : NSObject

+ (BOOL)isYouthControlEnabled;
+ (BOOL)checkTopVCIsTargetVCWithConversationID:(id)a0;
+ (void)transferToMessageVCWithUid:(id)a0 nickname:(id)a1 alias:(id)a2 isCompanyProfile:(BOOL)a3 fromVC:(id)a4 showKeyboard:(BOOL)a5;
+ (void)transferToMessageVCWithUid:(id)a0 nickname:(id)a1 alias:(id)a2 isCompanyProfile:(BOOL)a3 fromVC:(id)a4 showKeyboard:(BOOL)a5 ext:(id)a6;
+ (void)transferToMessageVCWithUid:(id)a0 nickname:(id)a1 alias:(id)a2 showFolloweeCount:(BOOL)a3 isCompanyProfile:(BOOL)a4 fromVC:(id)a5 showKeyboard:(BOOL)a6 ext:(id)a7 completion:(id /* block */)a8;
+ (void)transferToMessageVCWithConversationID:(id)a0 conversationType:(unsigned long long)a1 fromVC:(id)a2 extension:(id)a3 completion:(id /* block */)a4;
+ (void)createGroupManagementVCWithConversationID:(id)a0 extension:(id)a1 completion:(id /* block */)a2;
+ (id)transferToUserProfileWitUserID:(id)a0 secUserID:(id)a1 params:(id)a2;
+ (void)transferToMessageVCWithUid:(id)a0 nickname:(id)a1 alias:(id)a2 fromVC:(id)a3 ext:(id)a4 completion:(id /* block */)a5;
+ (BOOL)transferToSafeLinkWebViewWithUrl:(id)a0 fromCommerce:(BOOL)a1;
+ (id)getUserProfileViewControllerWitUserID:(id)a0 secUserID:(id)a1 params:(id)a2;
+ (void)transferToMessageVCWithUid:(id)a0 nickname:(id)a1 alias:(id)a2 showFolloweeCount:(BOOL)a3 isCompanyProfile:(BOOL)a4 fromVC:(id)a5;
+ (id)transferPathWithConversationID:(id)a0 conversationType:(unsigned long long)a1 extension:(id)a2;
+ (void)transferToMaxPriorityUserProfileWitUserID:(id)a0 secUserID:(id)a1 conversationID:(id)a2 params:(id)a3 completion:(id /* block */)a4;
+ (void)transferToPrivateChatAIBotPanelWitUserID:(id)a0 secUserID:(id)a1 params:(id)a2 completion:(id /* block */)a3;
+ (id)transferPathAppendHideNavBarValue:(id)a0;
+ (void)transferToMessageVCWithUid:(id)a0 nickname:(id)a1 alias:(id)a2 isCompanyProfile:(BOOL)a3 fromVC:(id)a4 completion:(id /* block */)a5;
+ (id)findMessageVCWithCid:(id)a0;
+ (id)transferPathForSafeLinkWebViewNotFromCommerceWithUrl:(id)a0;
+ (void)p_checkAndCreateGroupManagementVCWithConversationID:(id)a0 extension:(id)a1 completion:(id /* block */)a2;
+ (id)p_getCreateGroupManagementVCErrorWithCode:(long long)a0 desc:(id)a1;
+ (void)p_createGroupManagementVCWithConversationID:(id)a0 extension:(id)a1 completion:(id /* block */)a2;
+ (void)p_toCompletionErrorWithDesc:(id)a0 completion:(id /* block */)a1;
+ (BOOL)p_isLegalGroupWithConversationId:(id)a0;
+ (id)getCreateGroupManagementPathWithConversationID:(id)a0 extension:(id)a1;
+ (BOOL)isCorrectMessageVCWithCid:(id)a0 withVC:(id)a1;
+ (id)findTheCorrectMessageVCFromVC:(id)a0 withCid:(id)a1;
+ (id)p_genUserProfileCommonParam;
+ (id)transferPathForSafeLinkWebViewWithUrl:(id)a0 fromCommerce:(BOOL)a1;
+ (id)topViewController;
+ (id)topNavigationController;

@end
