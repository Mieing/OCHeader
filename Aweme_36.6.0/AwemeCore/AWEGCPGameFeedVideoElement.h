@class NSString;
@protocol AWEGCPFeedVideoSyncRouter;

@interface AWEGCPGameFeedVideoElement : LynxUI <AWEGCPGameFeedVideoDelegate>

@property (weak, nonatomic) id<AWEGCPFeedVideoSyncRouter> feedVideoSyncRouter;
@property (nonatomic) BOOL isFeedVideoPaused;
@property (nonatomic) BOOL isAssociatedMode;
@property (nonatomic) BOOL hasSetupAutoPlay;
@property (nonatomic) BOOL loop;
@property (nonatomic) BOOL muted;
@property (retain, nonatomic) NSString *fillMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)lynxLazyLoad;
+ (id)__lynx_ui_method_config__2211;
+ (id)__lynx_ui_method_config__2292;
+ (id)__lynx_ui_method_config__2403;
+ (id)__lynx_ui_method_config__2514;
+ (id)__lynx_ui_method_config__2625;
+ (id)__lynx_prop_config__2916;
+ (id)__lynx_prop_config__2967;
+ (id)__lynx_prop_config__3028;
+ (id)__lynx_prop_config__3089;
+ (id)__lynx_prop_config__31510;

- (void)onPlay;
- (void)onPause;
- (void)play:(id)a0 withResult:(id /* block */)a1;
- (void)pause:(id)a0 withResult:(id /* block */)a1;
- (void)stop:(id)a0 withResult:(id /* block */)a1;
- (void)updateVideoData:(id)a0;
- (void)seek:(id)a0 withResult:(id /* block */)a1;
- (void)muted:(BOOL)a0 requestReset:(BOOL)a1;
- (void)onReady;
- (void)onBufferChangeWithInfo:(id)a0;
- (void)onError:(long long)a0 msg:(id)a1;
- (void)onEnded;
- (void)onTimeUpdate:(double)a0 canPlayTime:(double)a1 totalTime:(double)a2;
- (void)setupDefaultProps;
- (void)updateMutedIfNeeded;
- (void)updateRepeatIfNeeded;
- (void)updateFitModeIfNeeded;
- (void)sendCustomEvent:(id)a0 params:(id)a1;
- (void)onSeek:(BOOL)a0;
- (void)playFeedVideoIfNeeded:(id)a0 withResult:(id /* block */)a1;
- (void)videoData:(id)a0 requestReset:(BOOL)a1;
- (void)loop:(BOOL)a0 requestReset:(BOOL)a1;
- (void)objectFit:(id)a0 requestReset:(BOOL)a1;
- (void)logextra:(id)a0 requestReset:(BOOL)a1;
- (void).cxx_destruct;
- (id)createView;
- (void)updateWithModel:(id)a0;
- (void)frameDidChange;
- (void)onStop;

@end
