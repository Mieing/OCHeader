@class NSString;

@interface IESLiveIMServiceIMP : NSObject <IESLiveIMService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)transferToMessageVCWithConversationID:(id)a0 conversationType:(long long)a1 fromVC:(id)a2 extension:(id)a3 completion:(id /* block */)a4;
- (void)joinConversation:(id)a0 shortId:(long long)a1 bizExtension:(id)a2 completion:(id /* block */)a3;
- (void)sendBulletMessageWithParams:(id)a0 toGroups:(id)a1 completion:(id /* block */)a2;
- (void)openIMCustomServiceChat:(id)a0 extra:(id)a1 completion:(id /* block */)a2;
- (void)openIMCustomServiceMessageList:(id)a0 extra:(id)a1;
- (void)dismissTopIMCustomServiceVCIfNeeded;
- (BOOL)useIMGroupPanel;
- (void)transferToMasterStateGroupPanelWithExt:(id)a0;
- (void)postLocalPushWithNotificationRequest:(id)a0 withCompletionHandler:(id /* block */)a1;
- (BOOL)canCreatePublicGroup;
- (void)acquireActiveWithSecUidList:(id)a0 convIdList:(id)a1 source:(id)a2 completion:(id /* block */)a3;
- (void)setIMCustomServiceDelegate:(id)a0;
- (void)asyncGetCurrentUnReadCount:(id)a0 role:(long long)a1 completion:(id /* block */)a2;
- (void)configNavLeftButtonColorWithButton:(id)a0 config:(id)a1;
- (void)tapBackButton:(id)a0;
- (id)transferTofriendsModelsWithShareModels:(id)a0 withLimit:(long long)a1;
- (id)transferTofriendsModelWithShareModel:(id)a0;
- (void)getIMFriendsModelWithCompletion:(id /* block */)a0;
- (void)getIMRecommendFriendsModelWithCompletion:(id /* block */)a0;
- (id)imUserRecommendTrackerWithBind:(id)a0;
- (void)createFansGroupChatWithOtherParticipants:(id)a0 type:(long long)a1 bizExtension:(id)a2 completion:(id /* block */)a3;
- (void)sendVideoWithLocalURL:(id)a0 coverImage:(id)a1 conversationId:(id)a2 followedTextMessage:(id)a3 completion:(id /* block */)a4;
- (void)transferToFansGroupAdminVCWithConversationID:(id)a0 completion:(id /* block */)a1;
- (void)transferToPublicGroupCreatePanelWithExt:(id)a0;
- (double)currentEditAreaHeightForNavigationController:(id)a0;
- (BOOL)enableAnnouncementFansGroupShare;
- (void)getIMFriendsAndRecommendModelWithCompletion:(id /* block */)a0;
- (void)fetchShareModelListWithParams:(id)a0 completion:(id /* block */)a1;
- (void)followUserWithLiveIMShareModel:(id)a0;
- (id)recommendDisplayRecommendReasonWithShareModel:(id)a0;
- (void)trackFollow:(id)a0 bind:(id)a1;
- (void)trackFollowCard:(id)a0 eventType:(id)a1 bind:(id)a2;
- (void)configUIForViewController:(id)a0 configuration:(id)a1;
- (void)hideIMPushView;
- (void)getIMFriendsListFirstAvatarWithCompletion:(id /* block */)a0;
- (void)showPerfPushView:(id)a0 title:(id)a1;
- (void)showAnchorLiveStableModePushViewWithType:(long long)a0 reason:(id)a1 detail:(id)a2 action:(id)a3;
- (void)showAnchorPerfPushViewWithWithType:(long long)a0 reason:(id)a1 detail:(id)a2 action:(id)a3 params:(id)a4 clickAction:(id /* block */)a5;
- (void)showAnchorInnerPush:(id)a0;
- (void)hideAnchorInnerPush;
- (id)showLiveLocalPush:(id)a0;
- (void)removeLiveLocalPushWithIdentifier:(id)a0;
- (void)pauseIMAbility:(id)a0;
- (void)resumeIMAbility:(id)a0;

@end
