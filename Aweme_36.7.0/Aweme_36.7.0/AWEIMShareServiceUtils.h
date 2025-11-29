@interface AWEIMShareServiceUtils : NSObject

+ (BOOL)isYouthControlEnabled;
+ (void)transferToSharePanelWithShareContext:(id)a0;
+ (void)transferToSingleChatWithContext:(id)a0 completion:(id /* block */)a1;
+ (void)createGroupShareWithShareContext:(id)a0 completion:(id /* block */)a1;
+ (void)createGroupCommandShareWithShareContext:(id)a0 completion:(id /* block */)a1;
+ (BOOL)showTransportVCForAwemeModel:(id)a0;
+ (BOOL)canShowCreateGroupShareWithShareContext:(id)a0;
+ (id)createFakeFlowShareModel;
+ (Class)aAWELiteUGSocialModuleAdapterClass;
+ (BOOL)shouldShowTranspondInFriendOrPartVisibleWithAwemeModel:(id)a0;
+ (void)shareWithShareContext:(id)a0 createGroup:(BOOL)a1 shareUser:(id)a2 text:(id)a3 completion:(id /* block */)a4;
+ (void)transferToShareListWithModel:(id)a0;
+ (void)transferToCreateChatWithContext:(id)a0 authorShareNotPublicAweme:(BOOL)a1 enterMethod:(id)a2 pageEnterFrom:(id)a3 multiSelectedItems:(id)a4 replayContent:(id)a5 fromOpenPlatform:(BOOL)a6 openPlatformShareCompletion:(id /* block */)a7;
+ (void)transferToAllFriendsListWithInviteBlock:(id /* block */)a0 fullScreen:(BOOL)a1 dismissFinishBlock:(id /* block */)a2 disableToast:(BOOL)a3 maxSelectedNumber:(id)a4;
+ (BOOL)showTransportVC;
+ (BOOL)showIMShareView;
+ (BOOL)shouldShowTranspondWithContext:(id)a0;
+ (void)transferToAppInternalWithModel:(id)a0;
+ (void)setLastSelectedShareTypeAsIM;
+ (id)getIMThirdPartShareSuccessView;
+ (id)showShareSuccessViewWithConetxt:(id)a0 didChooseMultiple:(BOOL)a1;
+ (id)addFakeModels:(id)a0 recentSharedCount:(long long)a1 context:(id)a2;
+ (void)createGroupShareWithShareImpl:(id)a0 shareModel:(id)a1 completion:(id /* block */)a2;
+ (BOOL)shouldShowIMShare;
+ (id)appNameWithContext:(id)a0;
+ (id)showShareSuccessViewWithThirdAppName:(id)a0 didChooseMultiple:(BOOL)a1 completion:(id /* block */)a2;
+ (BOOL)p_showTransportVCForAwemeModel:(id)a0;
+ (BOOL)isAwemeAuthorPrivate:(id)a0;
+ (BOOL)isFromLandscapeMixWithContext:(id)a0;
+ (BOOL)canShowLandscapeIMWithContext:(id)a0;
+ (void)modifyLiveTransferModel:(id)a0 withContext:(id)a1;
+ (void)modifyTransferModel:(id)a0 withContext:(id)a1;
+ (id)urlStringWithTransferModel:(id)a0;
+ (BOOL)shouldUsingFullScreenListWithShareContext:(id)a0;
+ (id)shareListViewControllerWithModel:(id)a0;
+ (void)p_configShareListVC:(id)a0 withLandscapeStyle:(unsigned long long)a1 titleAlign:(unsigned long long)a2;
+ (id)shareListLandscapeURLSchemaPrefix;
+ (id)shareListURLSchemaPrefix;
+ (void)p_appendPanelTrackExtraWithContext:(id)a0 urlString:(id)a1;
+ (void)showShareMessageToSingleChatCardWithCompletion:(id /* block */)a0 context:(id)a1;
+ (BOOL)p_showIMShareViewWithFollowingCount:(long long)a0;
+ (void)p_createGroupShareWithShareContext:(id)a0 shareModel:(id)a1 completion:(id /* block */)a2;
+ (void)transferToCreateGroupVCWithShareContext:(id)a0 completion:(id /* block */)a1;
+ (void)p_createGroupShareWithShareImpl:(id)a0 shareModel:(id)a1 completion:(id /* block */)a2;
+ (BOOL)revertCreateGroupCallBackOpt;
+ (id)addWechatFriendModel:(id)a0;
+ (id)addFakeModelToHeadIfNeeded:(id)a0 model:(id)a1 index:(long long)a2;
+ (void)createGroupShareWithShareContext:(id)a0 shareModel:(id)a1 completion:(id /* block */)a2;
+ (id)contactFriendModel:(id)a0;

- (id)aAWELiteUGSocialModuleAdapter;

@end
