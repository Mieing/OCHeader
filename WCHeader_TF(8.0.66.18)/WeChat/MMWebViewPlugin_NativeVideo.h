@class NSString, NSMutableDictionary, MMUIButton;

@interface MMWebViewPlugin_NativeVideo : MMWebViewPlugin_NativeView <MMWebNativeVideoPlayerDelegate, WCFinderMPVideoInteractionKeyExt> {
    NSMutableDictionary *m_viewsDict;
    NSMutableDictionary *m_contextDict;
    MMUIButton *m_exitFullscreenBtn;
    long long m_lastOrientation;
    BOOL m_shouldForbidWebViewBottomBar;
    BOOL m_isVideoInFullScreen;
}

@property (retain, nonatomic) NSMutableDictionary *dictLocalFinderPlayInfos;
@property (retain, nonatomic) NSMutableDictionary *dictLocalFinderFeedInfos;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned int)playerCountGlobal;

- (id)init;
- (void)dealloc;
- (void)resetAllStatus;
- (void)insertPlayerView:(id)a0 jsContext:(id)a1 errMsg:(id *)a2;
- (void)updateVideoWithParamsDict:(id)a0 errMsg:(id *)a1;
- (void)updatePlayerConfigWithParamsDict:(id)a0 playerView:(id)a1 errMsg:(id *)a2;
- (void)updateFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 animDuration:(double)a1 view:(id)a2;
- (id)getVideoPlayer:(unsigned int)a0;
- (id)genPlayerViewWithViewId:(unsigned int)a0;
- (BOOL)shouldForbidWebViewBottomBar;
- (void)onVideoPrepareToPlay:(unsigned int)a0;
- (void)onVideoBeginPlay:(unsigned int)a0;
- (void)onVideoCurrTimeChanged:(double)a0 totalDuration:(double)a1 viewId:(unsigned int)a2;
- (void)onVideoDidPlayToEndTime:(unsigned int)a0;
- (void)onVideoPause:(unsigned int)a0;
- (void)onPlayerStateChanged:(unsigned long long)a0 viewId:(unsigned int)a1;
- (void)onPlayerProcessStateChanged:(unsigned long long)a0 viewId:(unsigned int)a1 params:(id)a2;
- (void)onPlayerSeekCompelete:(unsigned int)a0;
- (void)onVideoBeginBuffering:(unsigned int)a0;
- (void)onVideoBufferingPercent:(double)a0 viewId:(unsigned int)a1;
- (void)onVideoPlayFail:(unsigned long long)a0 LocalizedErrorDes:(id)a1 viewId:(unsigned int)a2;
- (BOOL)isNeedInfoLogForEvent:(id)a0;
- (void)dispatchEvent:(id)a0 params:(id)a1 toViewId:(unsigned int)a2;
- (void)dispatchEvent:(id)a0 params:(id)a1 toViewId:(unsigned int)a2 onlyToWebCompt:(BOOL)a3;
- (void)dispatchEventToAllViews:(id)a0 params:(id)a1;
- (void)dispatchEventToAllViews:(id)a0 params:(id)a1 onlyToWebCompt:(BOOL)a2;
- (void)play:(unsigned int)a0;
- (void)pause:(unsigned int)a0;
- (void)stop:(unsigned int)a0;
- (void)seek:(unsigned int)a0 pos:(float)a1;
- (void)setPlayBackRate:(double)a0 viewId:(unsigned int)a1;
- (BOOL)isPlaying:(unsigned int)a0;
- (id)playContextOfViewId:(unsigned int)a0;
- (void)removePlayerView:(unsigned int)a0;
- (void)pauseAllVideosAndResumeWhenAppear;
- (void)resumeAllVideosWhenAppear;
- (BOOL)handleEvent:(unsigned long long)a0 userInfo:(id)a1 retInfo:(id)a2;
- (BOOL)handleFullScreenPluginEvent:(unsigned long long)a0 userInfo:(id)a1 retInfo:(id)a2;
- (BOOL)handleLifeCyclePluginEvent:(unsigned long long)a0 userInfo:(id)a1 retInfo:(id)a2;
- (BOOL)handleOtherPluginEvent:(unsigned long long)a0 userInfo:(id)a1 retInfo:(id)a2;
- (void)setExitFullscreenBtnHidden:(BOOL)a0 image:(id)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)initExitFullscreenBtnIfNeed;
- (void)onExitFullscreenBtnClicked;
- (void)didRotate:(id)a0;
- (int)orientationForJSAPI:(long long)a0;
- (void)onBrightnessDidChange:(id)a0;
- (void)onVolumeDidChange:(id)a0;
- (void)onAppResignActive;
- (void)onAppBecomeActive;
- (void)onVideoFullScreenStateChangedTo:(BOOL)a0;
- (id)takeVideoSnapshot:(unsigned int)a0;
- (BOOL)isActive;
- (void)exchangeFinderData:(id)a0 jsEvent:(id)a1;
- (void)pushPlayerView:(unsigned int)a0 localId:(id)a1 jsEvent:(id)a2 extInfo:(id)a3;
- (void)changeFeedLikeStatusWithJSON:(id)a0 isLike:(BOOL)a1;
- (void)changeFeedFavStatusWithJSON:(id)a0 isFav:(BOOL)a1;
- (id)MPVideoFinderInfoWithLocalFeedId:(id)a0;
- (void)finderMPVideoInteractionUpdate:(id)a0;
- (void).cxx_destruct;

@end
