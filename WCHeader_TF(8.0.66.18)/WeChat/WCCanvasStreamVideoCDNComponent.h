@class NSString;

@interface WCCanvasStreamVideoCDNComponent : WCCanvasVideoBaseComponent <WCCanvasImageLoaderObserver, WCCanvasAdControlViewDelegate>

@property (nonatomic) BOOL waitForUserClickToPlay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })calcSizeForCanvasItem:(id)a0 advertiseInfo:(id)a1 orientation:(long long)a2;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)configureWithCanvasItem:(id)a0 advertiseInfo:(id)a1 orientation:(long long)a2;
- (void)initAllSubviews;
- (BOOL)tryToStartWCPlayerWithAutoPlayFlag:(BOOL)a0;
- (BOOL)tryToPlayVideo;
- (BOOL)tryToPauseVideo;
- (BOOL)isAllowVoice;
- (void)setAllowVoiceFlag:(BOOL)a0;
- (id)fetchFloatBarActionItem;
- (id)createMediaItem;
- (long long)fetchWCPlayerContentMode;
- (BOOL)shouldLandscapeWhenTurnToFullscreen;
- (void)initThumbImageView;
- (void)tryToLoadVideo;
- (void)componentWillAppearInMainScreen:(BOOL)a0;
- (void)componentWillDisappearInMainScreen:(BOOL)a0;
- (void)componentAppearFactorChagneInMainScreen;
- (void)componentWillResumeState:(BOOL)a0;
- (void)componentWillStopState:(BOOL)a0;
- (void)componentWillEnterForeground;
- (void)componentDidEnterBackground;
- (void)tryToSetVideoPlayingState:(BOOL)a0;
- (void)ImageDidLoad:(id)a0 Url:(id)a1;
- (void)ImageDidFail:(id)a0;
- (void)onFullscreenBtnClick:(BOOL)a0;
- (void)onTapSightIconView;
- (void)onAudioButtonClick:(BOOL)a0;
- (void)onProgressBarActionBtnClick:(BOOL)a0;
- (void)onGetVideoSize:(struct CGSize { double x0; double x1; })a0;
- (void)onControlViewSingleTap;
- (void)onControlViewDoubleTap;
- (BOOL)shouldAutoPlayStreamVideo;
- (void)doStreamVideoReport:(int)a0;
- (void)reportFloatAreaExposedDataWithFloatAreaStayTime:(unsigned long long)a0 floatAreaExposureCount:(unsigned int)a1 buttonStayTime:(unsigned long long)a2 buttonExposureCount:(unsigned int)a3;
- (void)reportFloatAreaClickWithFullClick:(BOOL)a0;
- (void)reportFullscreenVideoPlayEnd;
- (void)reportFullscreenVideoPlayStart;
- (void)createAndSetupPlayer;
- (void)doOnPlayEnd;
- (void)tryToAutoResumeVideo;
- (void)tryToAutoPauseVideo;

@end
