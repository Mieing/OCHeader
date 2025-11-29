@class NSString, NSMutableDictionary, MMContext, MMTimer, WANativeViewPlugin, NSMutableArray, WASkylineRuntimeInfo;
@protocol WASkylineRuntimeDelegate;

@interface WASkyLineRuntime : NSObject <IWASkylineRuntime> {
    void *_runtimeShell;
}

@property (nonatomic) BOOL isReady;
@property (retain, nonatomic) NSMutableDictionary *skylineViewDic;
@property (retain, nonatomic) NSMutableDictionary *flutterVCDic;
@property (retain, nonatomic) NSMutableDictionary *rootScrollViewInfoDic;
@property (retain, nonatomic) WANativeViewPlugin *nativeViewPlugin;
@property (retain, nonatomic) MMContext *userContext;
@property (retain, nonatomic) MMTimer *timer;
@property (retain, nonatomic) NSMutableArray *pendingRouteBlock;
@property (nonatomic) BOOL isDestroyed;
@property (weak, nonatomic) id<WASkylineRuntimeDelegate> delegate;
@property (retain, nonatomic) WASkylineRuntimeInfo *runtimeInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getVersionString;
+ (void)onSkylineCppLog:(int)a0 file:(const char *)a1 line:(int)a2 str:(const char *)a3 strLen:(int)a4;

- (id)init;
- (void)dealloc;
- (BOOL)waitWindowReady:(id)a0;
- (id)getNativeViewPlugin;
- (void)createRuntime;
- (double)destroyRuntime;
- (void)destroyRuntimeHolder;
- (struct RuntimeDelegate { void /* function */ **x0; } *)runtimeDelegate;
- (void)destroyWindow:(id)a0;
- (void)sendUITaskRunner:(id)a0;
- (void)sendJsContext:(id)a0;
- (long long)getRuntimeHolderPtr;
- (void)sendRouteBlock:(id /* block */)a0;
- (void)notifyNavigateTo:(long long)a0 pageId:(long long)a1 pageCfg:(id)a2;
- (void)notifyRedirectTo:(long long)a0 pageId:(long long)a1 pageCfg:(id)a2;
- (void)notifyNavigateBack:(long long)a0 pageId:(long long)a1 calculatedDelta:(long long)a2 animated:(BOOL)a3 pageCfg:(id)a4;
- (void)notifyAppLaunch:(long long)a0 pageId:(long long)a1 pageCfg:(id)a2;
- (void)notifyReLaunch:(long long)a0 pageId:(long long)a1 pageCfg:(id)a2;
- (void)notifyAutoReLaunch:(long long)a0 pageId:(long long)a1 pageCfg:(id)a2;
- (void)notifySwitchTab:(long long)a0 pageId:(long long)a1 pageCfg:(id)a2;
- (struct shared_ptr<skyline::PageConfig> { struct PageConfig *x0; struct __shared_weak_count *x1; })makePageConfig:(id)a0;
- (void)updateWindowViewport:(long long)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void)updateDarkMode:(BOOL)a0 isDarkMode:(BOOL)a1;
- (void)updateKeyboardHeight:(long long)a0 widgetId:(long long)a1 height:(double)a2 duration:(double)a3;
- (void)updateCurrentKeyboardHeight:(long long)a0 widgetId:(long long)a1 height:(double)a2;
- (id)getSkylineViewByWindowId:(long long)a0;
- (BOOL)listenRootScrollViewChange;
- (id)getRootScrollViewInfo:(long long)a0;
- (void)runServiceBlock:(id /* block */)a0;
- (void)runServiceBlock:(id /* block */)a0 atTime:(double)a1;
- (void)runServiceBlock:(id /* block */)a0 afterDelay:(double)a1;
- (void)innerRunServiceBlock:(id /* block */)a0 afterDelay:(double)a1;
- (id)loadResourceSync:(id)a0;
- (void)loadResourceAsync:(id)a0 requestId:(int)a1;
- (id)innerLoadResource:(id)a0;
- (void)writeTempFileAsync:(id)a0 fileType:(id)a1 callback:(id /* block */)a2;
- (void)onNotifyRuntimeReady;
- (void)onNotifyWindowReady:(long long)a0;
- (void)onNotifyWindowDestroy:(long long)a0;
- (void)onNotifyRouteDone:(long long)a0 pageId:(long long)a1;
- (void)onNotifyNavigateBack:(long long)a0 pageId:(long long)a1;
- (void)onNotifyNavigateBackDone:(long long)a0 pageId:(long long)a1;
- (void)onNotifyFirstFrame:(long long)a0 pageId:(long long)a1 totalSpan:(double)a2;
- (void)onKVReport:(unsigned int)a0 content:(id)a1;
- (void)onIDKeyReport:(unsigned int)a0 key:(unsigned int)a1 value:(unsigned int)a2;
- (BOOL)nativeViewUseTexture:(id)a0 nativeViewType:(id)a1 extraData:(id)a2;
- (void)onUpdateMapCustomCallout:(long long)a0 markerId:(long long)a1 anchorX:(double)a2 anchorY:(double)a3 alwaysDisplay:(BOOL)a4 imgData:(id)a5;
- (void)handleNativeViewPointerEvent:(id)a0;
- (BOOL)isJsc2Enabled;
- (void)onNotifyRootScrollViewChange:(id)a0;
- (void).cxx_destruct;

@end
