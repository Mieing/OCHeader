@class UISlider, WAMediaCastingAirPlayDetector, NSString;
@protocol WAJSContextPlugin_NativeViewsRootViewProtocol;

@interface WAPluginComponent_VideoPlayer : NSObject <WAVideoPlayerViewDelegate, WAMediaCastingAirPlayDetectorDelegate> {
    BOOL _didAppear;
    Class VideoClass;
    struct CGPoint { double x; double y; } _contentOffset;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _webViewFrame;
    BOOL _tabBarVisible;
    BOOL _scrollEnabled;
    BOOL _statusBarBlack;
    long long _contentInsetAdjustmentBehavior;
    unsigned int _delayFullScreenViewID;
    BOOL _statusBarHidden;
}

@property (retain, nonatomic) UISlider *volumeViewSlider;
@property (retain, nonatomic) WAMediaCastingAirPlayDetector *airPlayDetector;
@property (nonatomic) long long lastOrientation;
@property (nonatomic) BOOL isInBackground;
@property (copy, nonatomic) NSString *appid;
@property (nonatomic) BOOL isInVideoFullScreen;
@property (weak, nonatomic) id<WAJSContextPlugin_NativeViewsRootViewProtocol> embedViewDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)getDirection:(long long)a0;

- (id)init;
- (void)registerAirPlayDetectorDelegate;
- (void)unregisterAirPlayDectorDelegate;
- (void)dealloc;
- (void)initVolumeViewSilderIfNeeded;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rootViewFrame;
- (id)webViewController;
- (void)onWeAppWillEnterBackground:(id)a0;
- (void)onWeAppDidEnterBackground:(id)a0;
- (void)appWillTerminate:(id)a0;
- (void)onWeAppEnterForeground;
- (void)handleVideoAppear;
- (void)handleVideoDisappear;
- (void)disableFullScreen;
- (id)insertVideo:(id)a0 pos:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 videoId:(unsigned int)a2 parentId:(unsigned int)a3 referrerPolicyType:(unsigned long long)a4 backgroundColor:(id)a5;
- (id)getVideoPlayer:(unsigned int)a0;
- (void)onVolumeChange:(double)a0;
- (id)getVolumeSlider;
- (void)onVideoEvent:(id)a0 param:(id)a1;
- (void)videoPlayerView:(id)a0 onVideoStateChange:(long long)a1;
- (id)getWAVC;
- (BOOL)operateVideoPlayer:(id)a0 videoId:(unsigned int)a1;
- (BOOL)removeVideoPlayer:(unsigned int)a0;
- (void)updateParentId:(unsigned int)a0 forChild:(unsigned int)a1;
- (void)_sendVideoBackgroundPlaybackChangeEvent:(BOOL)a0 videoPlayerId:(long long)a1 data:(id)a2;
- (id)minimizationItemInfoWithVideoView:(id)a0;
- (long long)forceInterfaceOrientation;
- (void)enableFullScreen:(BOOL)a0 orientation:(long long)a1 video:(id)a2;
- (void)enableWebViewScroll:(BOOL)a0;
- (id)getCurrentSnapshot;
- (void)snapshotVideoBegin;
- (void)snapshotVideoEnd;
- (void)pauseVideoTemp:(BOOL)a0;
- (void)pauseVideoTemp:(BOOL)a0 needFloat:(BOOL)a1;
- (BOOL)isForground;
- (void)onWAMediaCastingAirPlayDetector:(id)a0 wirelessRouteActiveDidChange:(BOOL)a1;
- (void)didRotate:(id)a0;
- (id)getOrientationStr;
- (id)getCurrentAppid;
- (void).cxx_destruct;

@end
