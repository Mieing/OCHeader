@class UINavigationController, MemoryMappedKV, WAWebViewController, WAFloatingVideoView, WAFloatingViewBaseWrapper, NSString;

@interface WAJSContextPlugin_FloatVideo : WAJSContextPluginBase <WAFloatingVideoDelegate, WAVideoPlayerViewDelegate, TXLivePlayJSAdapterDelegate>

@property (retain, nonatomic) WAFloatingViewBaseWrapper *floatingViewWrapper;
@property (retain, nonatomic) WAFloatingVideoView *floatingVideoView;
@property (weak, nonatomic) UINavigationController *currentNavigationController;
@property (nonatomic) BOOL hasRecovered;
@property (nonatomic) BOOL needRemoveFloatViewAfterTransitioning;
@property (nonatomic) BOOL isFloatingVideoMinimizing;
@property (nonatomic) BOOL needRemoveFloatViewAfterPop;
@property (nonatomic) struct CGPoint { double x; double y; } floatVideoRightBottomMargin;
@property (retain, nonatomic) MemoryMappedKV *mmkv;
@property (retain, nonatomic) WAWebViewController *webviewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)currentAppTask;
- (BOOL)handleEvent:(long long)a0 userInfo:(id)a1;
- (id)getPlayerViewSnapShotView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 contentMode:(long long)a1 addToVideoView:(BOOL)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })correctFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)floatVideoAreaHeight:(id)a0;
- (void)setupFloatingViewPosition:(id)a0;
- (void)minimizedFloatingView:(id)a0;
- (void)maximizedFloatingView:(id)a0;
- (void)showWithContext:(id)a0 type:(long long)a1;
- (void)updateFloatVideoMargins:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getFloatingVideoViewFrame:(id)a0 orientation:(long long)a1;
- (BOOL)removeFloatingVideoView;
- (BOOL)recoverFloatingVideoView;
- (void)closeForRelaunch;
- (BOOL)closeFloatingVideoView;
- (BOOL)operateFloatVideoWithDic:(id)a0 playerId:(unsigned int)a1;
- (void)setFloatingVideoParams;
- (void)resetFloatingVideoParams:(BOOL)a0;
- (void)reset;
- (void)resetPlayerParamAndRemoveView:(BOOL)a0;
- (BOOL)isFloatingVideoExist;
- (id)getFloatingVideoView;
- (unsigned int)getFloatingVideoId;
- (void)onVideoStartPlayingFromWebView:(id)a0 playerId:(unsigned int)a1 autoPlay:(BOOL)a2;
- (void)onVideoPauseFromWebView:(id)a0 playerId:(unsigned int)a1;
- (void)onFloatingVideoViewClosed;
- (void)onFloatingVideoViewClicked;
- (void)onMoveEndWithTouchAlgorithmResultMoveTo:(struct CGPoint { double x0; double x1; })a0;
- (long long)getFloatingPlayerViewType;
- (BOOL)isWebViewInPageStack;
- (void)onVideoEvent:(id)a0 param:(id)a1;
- (void)videoPlayerView:(id)a0 onVideoStateChange:(long long)a1;
- (void)onVideoPlay:(double)a0 duration:(double)a1;
- (void)onPlayEvent:(int)a0 evtMsg:(id)a1 playerId:(unsigned int)a2 param:(id)a3;
- (void)onPlayNetStatus:(id)a0 playerId:(unsigned int)a1;
- (void)onAudioVolumeEvaluation:(unsigned int)a0 volume:(int)a1;
- (void)dealloc;
- (void)willRotate:(id)a0;
- (void)didRotate:(id)a0;
- (void)sendPlayerMinEvent:(id)a0;
- (void)sendPlayerMaxEvent:(id)a0;
- (void)sendEventWithFloatingValue:(long long)a0 webview:(id)a1;
- (void)sendEventWithFloatingValue:(id)a0 service:(id)a1 videoKey:(id)a2 webview:(id)a3;
- (void)reportFloatVideoWhenDisappeared:(id)a0;
- (void)dataReportWithEventId:(unsigned long long)a0 eventNote:(unsigned long long)a1;
- (void).cxx_destruct;

@end
