@class NSString;

@interface WCCanvasSightCDNComponent : WCCanvasVideoBaseComponent <WCCanvasImageLoaderObserver, WCPlayerDownloaderExt, WCCanvasAdControlViewDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })calcSizeForCanvasItem:(id)a0 advertiseInfo:(id)a1 orientation:(long long)a2;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)configureWithCanvasItem:(id)a0 advertiseInfo:(id)a1 orientation:(long long)a2;
- (void)componentAppearFactorChagneInMainScreen;
- (void)componentWillAppearInMainScreen:(BOOL)a0;
- (void)componentWillDisappearInMainScreen:(BOOL)a0;
- (void)componentDidEnterBackground;
- (void)componentWillEnterForeground;
- (void)componentWillStopState:(BOOL)a0;
- (void)componentWillResumeState:(BOOL)a0;
- (void)tryToSetVideoPlayingState:(BOOL)a0;
- (void)initWCPlayerViewInner;
- (BOOL)tryToLoadThumbImage;
- (void)tryToLoadSightVideo;
- (BOOL)isSightVideoExist;
- (void)onProgressBarActionBtnClick:(BOOL)a0;
- (void)onTapSightIconView;
- (void)onAudioButtonClick:(BOOL)a0;
- (void)onControlViewSingleTap;
- (void)onControlViewDoubleTap;
- (void)onFullscreenBtnClick:(BOOL)a0;
- (void)doOnPlayEnd;
- (void)ImageDidLoad:(id)a0 Url:(id)a1;
- (void)ImageDidFail:(id)a0;
- (void)OnCdnDownloadSuccess:(id)a0;
- (void)OnPlayerDownloadProgress:(id)a0 finish:(unsigned long long)a1 total:(unsigned long long)a2;
- (void)tryToResumePlayWhenDisplayScaleChange;
- (void)reportTotalVideoTotalTime:(double)a0;
- (void)initAllSubviews;
- (BOOL)tryToPlayVideo;
- (BOOL)tryToPauseVideo;
- (BOOL)isForbiddenControlViewShow;
- (BOOL)isAllowVoice;
- (void)setAllowVoiceFlag:(BOOL)a0;
- (id)fetchFloatBarActionItem;
- (void)reportFloatAreaExposedDataWithFloatAreaStayTime:(unsigned long long)a0 floatAreaExposureCount:(unsigned int)a1 buttonStayTime:(unsigned long long)a2 buttonExposureCount:(unsigned int)a3;
- (void)reportFloatAreaClickWithFullClick:(BOOL)a0;
- (void)reportFullscreenVideoPlayEnd;
- (void)reportFullscreenVideoPlayStart;
- (id)createMediaItem;
- (long long)fetchWCPlayerContentMode;
- (BOOL)shouldLandscapeWhenTurnToFullscreen;

@end
