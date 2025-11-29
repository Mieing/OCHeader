@class NSString;

@interface IESLivePlaybackAdapterImpl : IESLiveBaseAdapter <IESLivePlaybackAdapter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isScreenCasting;
- (void)playbackTrackEvent:(id)a0 params:(id)a1;
- (void)commentRefreshUserInfoWithCompletion:(id /* block */)a0;
- (void)requestUserProfile:(id)a0 secUid:(id)a1 completion:(id /* block */)a2;
- (void)showSharePanelWithSource:(id)a0 user:(id)a1 focusTabID:(unsigned long long)a2 tokenImage:(id)a3 trackContext:(id)a4 eventContext:(id)a5 douplusHandler:(id /* block */)a6 diContext:(id)a7;
- (BOOL)isPlayBackContentAuthorizedToThisClientWithUser:(id)a0;
- (double)commentButtonContentWidth;
- (BOOL)isInPiPMode;
- (void)hideCloseButton;
- (void)ieslive_applyAccessibilityWithView:(id)a0 label:(id)a1;
- (void)ieslive_applyAccessibilityWithView:(id)a0 label:(id)a1 hint:(id)a2 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (id)cellularFragmentRoomAudienceLoadStateObserver;
- (void)constructTrackContextWithModel:(id)a0 eventContext:(id)a1;
- (id)constructTrackContextWithModelParams:(id)a0 params:(id)a1;
- (void)addCommomAttributeWithKey:(id)a0 value:(id)a1 eventContext:(id)a2;
- (void)updateOrientationWithEventContext:(id)a0;
- (id)enterFromWithEventContext:(id)a0;
- (id)enterMethodWithEventContext:(id)a0;
- (id)adExtraWithEventContext:(id)a0;
- (BOOL)isFollowWithInfo:(id)a0;
- (BOOL)enablePopupPan;
- (id)commonModelWithGPB:(id)a0;
- (BOOL)isFirstResponderForIsAutoOrientationChangeForbidden;
- (BOOL)IESLiveDouyin;
- (id)createMessageActionCreator:(id)a0;
- (void)fetchSettingsIsForcible:(BOOL)a0 isColdLaunch:(BOOL)a1;
- (id)IESLivePlaybackMainTabServiceTrackerParameters;
- (id)componentsConfigFromPlist;
- (BOOL)isNeedDanmakuWithRole:(BOOL)a0 blockRoleComment:(id)a1;
- (BOOL)isSaaS;
- (void)openUserPageWithUserID:(id)a0 secUid:(id)a1;
- (void)unfollowUserWithBlock:(id /* block */)a0;
- (void)coreTransformerWithOriginalMessage:(id)a0 withNeedTransformerMessage:(id)a1;
- (id)screenCastSDKCommonParams;
- (void)logAnchorCloseRoomSource:(id)a0;
- (BOOL)hasAuthenticationIconImageWithUser:(id)a0;
- (id)authenticationIconImageWithUser:(id)a0;
- (id)emoticonItems;
- (id)quickReplyEmoticonItems;
- (id)loadFaveriteStickerResource;
- (void)cellularReplayTip:(long long)a0 withIndex:(long long)a1;
- (id)fakeShowChatMessageFromShowChatRes:(id)a0;
- (id)createVideoPaidProvider;
- (void)vsMessageDispatchProviderAddSubscriberForAll:(id)a0;
- (id)createSharedIESScreenCastAdapter;
- (id)createScreenCastContainerViewController;
- (id)createScreenCastSearchContainerViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getPlayerPortraitFrame;
- (id)transformModelFromWithEmojiModels:(id)a0;
- (id)playBackVideoResolutionStateKey;
- (void)downloadDanmakuEffectResourceWithCategory:(id)a0 panelName:(id)a1 completion:(id /* block */)a2;
- (void)focusBlockLiveEpisode:(id)a0 completion:(id /* block */)a1;
- (id)createCommonPopoverViewWithLockButton:(id)a0 tip:(id)a1;
- (BOOL)shouldAutorotate;
- (BOOL)shouldReceiveTouch:(id)a0;
- (void)showCloseButton;

@end
