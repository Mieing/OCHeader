@class NSString, WCAdLiveDisplayView, WCAdCommonInteractionLogic, WCSightView, MMUIView, UIImageView, WCAdFinderLiveLogic, ForwardMessageLogicController, WCAdFinderLivePlayerView;

@interface WCContentItemViewTemplateNewSight : WCContentItemBaseView <WCActionSheetDelegate, ForwardMessageLogicDelegate, WCAdCommonInteractionLogicDelegate, WCSightViewDelegate> {
    WCSightView *_sightView;
    UIImageView *_adActionIconView;
    ForwardMessageLogicController *m_forwardMsgLogic;
}

@property (nonatomic) unsigned long long legalityType;
@property (retain, nonatomic) WCAdLiveDisplayView *liveDisplayView;
@property (retain, nonatomic) MMUIView *mediaHolder;
@property (retain, nonatomic) WCAdFinderLivePlayerView *finderLivePlayerView;
@property (retain, nonatomic) WCAdFinderLiveLogic *finderLiveLogic;
@property (retain, nonatomic) WCAdCommonInteractionLogic *commonInteractionLogic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightForMedia:(id)a0 showDetail:(BOOL)a1;

- (void)layoutSubviews;
- (void)dealloc;
- (void)initViewsWithWCDataItem:(id)a0;
- (void)initMediaView:(id)a0 mediaItem:(id)a1;
- (id)initWithWCDataItem:(id)a0;
- (id)initWithWCDataItem:(id)a0 showDetail:(BOOL)a1;
- (id)initWithWCDataItem:(id)a0 showDetail:(BOOL)a1 withScene:(unsigned long long)a2;
- (id)createSightView:(id)a0 mediaItem:(id)a1 size:(struct CGSize { double x0; double x1; })a2;
- (void)addSightView:(id)a0 mediaItem:(id)a1;
- (id)createFinderLivePlayer:(id)a0;
- (void)addFinderLivePlayer:(id)a0;
- (void)onClickFinderLivePlayer;
- (id)sightVideoPath;
- (id)getMainContentView;
- (void)autoPlayWithoutSound;
- (void)autoPauseWithoutSound;
- (double)fetchVideoCurrentPlaybackTime;
- (void)contentItemWillDisplay;
- (void)contentItemDidEndDisplaying;
- (void)contentItemWillDisappear;
- (void)contentItemBecomeInvisible;
- (void)contentItemDidEndDecelerating;
- (void)onVoiceOverClick;
- (id)getVoiceOverStrForTimeline;
- (void)initLiveInfoView:(id)a0;
- (void)updateLiveStatus:(int)a0;
- (id)interactionView;
- (void)initInteractionViewWithDataItem:(id)a0;
- (id)onAdCommonInteractionLogicFetchDataItem;
- (unsigned long long)onAdCommonInteractionLogicFetchScene;
- (void)onAdCommonInteractionLogicShakeActionFired;
- (void)onClickWCSight:(id)a0;
- (void)onLongPressedWCSight:(id)a0;
- (void)onLongPressedWCSightFullScreenWindow:(id)a0;
- (void)onShowSightAction;
- (void)onLongTouch;
- (void)onFavoriteAdd:(id)a0;
- (void)onShareToOpenSDK;
- (BOOL)canShareToOpenSDK;
- (void)onMore:(id)a0;
- (void)jumpToDetail:(id)a0;
- (void)onJumpToViewDetail:(id)a0;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (id)getVisibleViewController;
- (void)sendSightToFriend;
- (void)onExposeWithDataItem;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)a0;
- (void)OnForwardMessageCancel:(id)a0;
- (void).cxx_destruct;

@end
