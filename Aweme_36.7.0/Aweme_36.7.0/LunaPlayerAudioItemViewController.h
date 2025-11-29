@class _TtC21AWEMusicStreamingImpl18LunaAudioSceneView, NSString, UIView;

@interface LunaPlayerAudioItemViewController : LunaPlayerBaseItemViewController <AWEMusicStreamingImpl.LunaPlayerItemSceneViewDelegate, AWEMusicStreamingImpl.BNSnackBarShowing>

@property (retain, nonatomic) _TtC21AWEMusicStreamingImpl18LunaAudioSceneView *audioSceneView;
@property (retain, nonatomic) NSString *anchorPurchId;
@property (retain, nonatomic) NSString *subscriberPurchId;
@property (nonatomic) long long lyricsId;
@property (nonatomic) unsigned long long playerAnchorType;
@property (nonatomic) BOOL anchorDidShow;
@property (nonatomic) BOOL lyricsDidShow;
@property (readonly, nonatomic) long long snackBarBottomAlignment;
@property (readonly, nonatomic) double bottomBarHeight;
@property (readonly, nonatomic) UIView *targetView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onStartPlay:(id)a0;
- (void)onSeekOver:(id)a0;
- (id)commerceAnchorTitle:(id)a0;
- (void)willSceneViewUpdate:(id)a0;
- (void)onToggleLyricMode:(id)a0;
- (void)onClickAnchor:(id)a0;
- (void)onClickCommerceAnchor:(id)a0;
- (BOOL)canCommerceAnchorShow:(id)a0;
- (BOOL)canShowDoubleLinaLyrics:(id)a0;
- (void)itemViewDidAppear;
- (void)luna_onUserSubscriberStatusChangedFinished:(unsigned long long)a0;
- (void)itemDidDisappear;
- (void)mainFeed_viewDidAppear;
- (void)p_anchorDidShow;
- (id)p_eventParams;
- (id)p_diversionExtraParams;
- (void)mainFeed_showSubscriberInterceptIfNeeded;
- (void)onLunaV2Update:(BOOL)a0;
- (void)onGestureSeeking:(double)a0;
- (void)onClickDiversionAnchor:(id)a0 scene:(long long)a1;
- (id)p_anchorExtraParams;
- (BOOL)p_noSubsAndHasFreeSubs;
- (void)onClickSubscriberIcon;
- (void)onClickTitle;
- (void)onClickSubTitle;
- (void).cxx_destruct;
- (void)reset;
- (void)viewDidLoad;
- (void)updateUI;
- (void)updateProgress:(double)a0;
- (id)sceneView;
- (id)trackInfo;
- (void)updateDuration:(double)a0;

@end
