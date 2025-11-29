@class AWELiveWebShareHelper, NSString, IESLiveLandscapePreviewViewController;
@protocol IESLiveDouPlusService, IESLiveShareResponseService, IESLiveEffectAdService;

@interface AWELiveNewShareServiceImpl : NSObject <AWEShareMessage, AWEIMShareSendMessage, IESLiveShareService>

@property (retain, nonatomic) id<IESLiveShareResponseService> shareResponseService;
@property (retain, nonatomic) IESLiveLandscapePreviewViewController *landscapeContainer;
@property (retain, nonatomic) id<IESLiveDouPlusService> douPlusService;
@property (retain, nonatomic) id<IESLiveEffectAdService> effectAdService;
@property (retain, nonatomic) AWELiveWebShareHelper *webShareHelper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)attachingDIContext;
- (void)updateLiveFansGroupShareModelsCache;
- (void)receiveShareChannelEvent:(id)a0 platform:(id)a1 liveShareModel:(id)a2 extraParams:(id)a3;
- (void)hideLandscapePannelContainer;
- (void)shareTaskFinished:(id)a0 withResult:(id)a1;
- (void)shareWithInsideType:(long long)a0 contentModel:(id)a1 roomModel:(id)a2;
- (void)openLiveBoardWithShareContentModel:(id)a0 roomModel:(id)a1 fromController:(id)a2 eventContext:(id)a3;
- (void)openPreLiveBoardWithShareContentModel:(id)a0 roomModel:(id)a1 fromController:(id)a2 eventContext:(id)a3;
- (void)openImageShareBoardWithImage:(id)a0 fromController:(id)a1 dismissBlock:(id /* block */)a2;
- (void)shareToLandscapeImWithContentModel:(id)a0 roomModel:(id)a1;
- (void)shareToIMConversationWithId:(id)a0 roomModel:(id)a1;
- (id)createContactListWithRoomModel:(id)a0 contentModel:(id)a1 config:(id)a2 delegate:(id)a3;
- (void)openLiveBoardForH5WithParams:(id)a0 asyncCallback:(id /* block */)a1;
- (void)processWebShareWithParam:(id)a0 completion:(id /* block */)a1;
- (void)fetchQRCodeImageWithType:(long long)a0 itemID:(id)a1 completion:(id /* block */)a2;
- (BOOL)isShareTypeAvailable:(long long)a0;
- (BOOL)openSharePlatform:(long long)a0;
- (void)openSharePlatform:(long long)a0 completion:(id /* block */)a1;
- (BOOL)isShareCommandViewShowing;
- (BOOL)shouldShowFriendsListWithRoom:(id)a0;
- (void)updateLiveShareUserListStore;
- (double)landscapeSharePanelWidth;
- (double)landscapeSharePanelShowAnimationDuration;
- (double)landscapeSharePanelDismissAnimationDuration;
- (void)openLiveFormatWithShareContentModel:(id)a0 roomModel:(id)a1 fromController:(id)a2 eventContext:(id)a3 dismissBlock:(id /* block */)a4;
- (void)openLiveFormatWithShareContentModel:(id)a0 episodeModel:(id)a1 fromController:(id)a2 eventContext:(id)a3 dismissBlock:(id /* block */)a4;
- (void)playbacktLandscapeShareWithContentModel:(id)a0 episodeModel:(id)a1 fromController:(id)a2 eventContext:(id)a3 dismissBlock:(id /* block */)a4;
- (void)openImageShareLandscpaePanelWithContentModel:(id)a0 roomModel:(id)a1 fromController:(id)a2 eventContext:(id)a3 willDismissHandler:(id /* block */)a4;
- (void)openLandscapePannelWithContentModel:(id)a0 roomModel:(id)a1 eventContext:(id)a2;
- (void)inviteFriendsToJoinChatChannelV2:(id)a0 inviteId:(id)a1 roomType:(id)a2 users:(id)a3 context:(id)a4;
- (void)willSendIMShareMessageWithContext:(id)a0;
- (id)liveShareUserAndGroupListInStore;
- (void)openChatChannel:(id)a0 withHeight:(double)a1 cornerRadii:(double)a2 showRecommond:(BOOL)a3 fetchModel:(id /* block */)a4 clickHandler:(id /* block */)a5 inviteInfo:(id /* block */)a6 shareUsersBlock:(id /* block */)a7 dismissBlock:(id /* block */)a8 showBlock:(id /* block */)a9 diContext:(id)a10;
- (void)FullLinkTrackEventWithName:(id)a0 params:(id)a1;
- (BOOL)isShareSceneVS:(long long)a0;
- (void)reportShareTaskFinished:(id)a0;
- (BOOL)isTargetTypeLive:(id)a0;
- (void)executeAnchorShareTaskWithShareContext:(id)a0;
- (void)reportShareInfoWithShareType:(long long)a0 targetType:(long long)a1 platform:(id)a2 context:(id)a3 extraParams:(id)a4;
- (void)reportLandscapeShare:(id)a0 platform:(id)a1 liveShareModel:(id)a2 extraParams:(id)a3;
- (void)trackPreLiveShareWithRoom:(id)a0 shareType:(long long)a1 targetType:(long long)a2 platform:(id)a3 currentUser:(id)a4 eventContext:(id)a5 extraTrackParams:(id)a6;
- (void)trackShareWithRoom:(id)a0 pageContext:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
