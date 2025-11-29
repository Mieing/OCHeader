@interface IESIMInviteAIPanelUtility : NSObject

+ (void)showGroupManageAICloneViewControllerWithAIClone:(id)a0 con:(id)a1 didRemoveAICloneBlock:(id /* block */)a2 trackParams:(id)a3 completion:(id /* block */)a4;
+ (void)showGroupAddAICloneViewControllerWithUserID:(long long)a0 con:(id)a1 didAddBlock:(id /* block */)a2 trackParams:(id)a3 completion:(id /* block */)a4;
+ (BOOL)canAddAICloneOfUid:(id)a0 toCon:(id)a1;
+ (void)checkBotId:(id)a0 inConversationID:(id)a1 completion:(id /* block */)a2;
+ (void)transferToAICloneCreatorProfileWithUserID:(id)a0 secUserID:(id)a1;
+ (void)fetchAICloneUserWithUid:(id)a0 completion:(id /* block */)a1;
+ (id)viewModelWithBotUser:(id)a0 panelStyle:(unsigned long long)a1 con:(id)a2 trackParams:(id)a3;
+ (id)createAICloneInfoSheetWithViewModel:(id)a0;
+ (id)gotoFormatChatModelWithAICloneUser:(id)a0 creatorUser:(id)a1 con:(id)a2 enterFrom:(id)a3 formatEnterMethod:(id)a4 passInEnterMethod:(id)a5 sheet:(id)a6 viewModel:(id)a7;
+ (void)fetchAICloneCreatorWithSecUid:(id)a0 needFormatInfo:(BOOL)a1 callback:(id /* block */)a2;
+ (void)showSheet:(id)a0 withViewModel:(id)a1 completion:(id /* block */)a2;
+ (void)configProactiveSettingForViewModel:(id)a0 valueDidChangeBlock:(id /* block */)a1;
+ (void)doTaskWithBotID:(long long)a0 taskType:(long long)a1 con:(id)a2 viewModel:(id)a3 proactive:(BOOL)a4 trackParams:(id)a5 completion:(id /* block */)a6;
+ (void)showGroupAddAICloneViewControllerWithUserID:(long long)a0 con:(id)a1 didAddBlock:(id /* block */)a2 trackParams:(id)a3 addButtonTitle:(id)a4 completion:(id /* block */)a5;
+ (void)showGroupAddAICloneViewControllerWithAICloneUser:(id)a0 con:(id)a1 didAddBlock:(id /* block */)a2 trackParams:(id)a3 addButtonTitle:(id)a4 completion:(id /* block */)a5;
+ (BOOL)isForbidAddUid:(id)a0;
+ (void)showAICloneInfoPanelWithBotUser:(id)a0 con:(id)a1 trackParams:(id)a2 completion:(id /* block */)a3;
+ (void)prepareBasicDataWithBotID:(id)a0 conversationID:(id)a1 completion:(id /* block */)a2;
+ (void)showAICloneBookPanelWithBotUser:(id)a0 con:(id)a1 trackParams:(id)a2;
+ (void)showIncentiveTaskPanelWithAICloneUser:(id)a0 con:(id)a1 taskType:(long long)a2 buttonTitle:(id)a3 extraParams:(id)a4;

@end
