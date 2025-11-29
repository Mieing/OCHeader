@interface WeChat.MagicCardStarterSclBiz : WeChat.MagicSclBaseBiz <WeChat.IMagicCardSclBizInnerDelegate> {
    void /* unknown type, empty encoding */ mbCommonAdapter;
    void /* unknown type, empty encoding */ mbVConsoleHelper;
    void /* unknown type, empty encoding */ pkgMgr;
    void /* unknown type, empty encoding */ jsapiContextImpl;
    void /* unknown type, empty encoding */ frameSetRootId;
    void /* unknown type, empty encoding */ _bizName;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ destroyCallback;
    void /* unknown type, empty encoding */ bizConfig;
    void /* unknown type, empty encoding */ mbJsApiList;
    void /* unknown type, empty encoding */ appBrandJsApiList;
    void /* unknown type, empty encoding */ frameSetRootMap;
    void /* unknown type, empty encoding */ frameSetRootConfigWithViewCache;
    void /* unknown type, empty encoding */ _preloadingMap;
    void /* unknown type, empty encoding */ hasStarted;
    void /* unknown type, empty encoding */ hasStartedByPreload;
    void /* unknown type, empty encoding */ PreloadMaxSize;
    void /* unknown type, empty encoding */ PRELOAD_ITEM_EXPIRED_TIME_MS;
    void /* unknown type, empty encoding */ bizVc;
}

- (void)preloadWithRootConfig:(id)a0 frameSetName:(id)a1 frameSetData:(id)a2 containerRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 preloadStrategy:(long long)a4;
- (void)onStartUpCoverReadyWithFrameSetId:(id)a0;
- (void)bindFrameSetViewWithRootConfig:(id)a0 containerView:(id)a1 frameSetName:(id)a2 frameSetData:(id)a3 viewId:(long long)a4 callback:(id /* block */)a5;
- (void)scrollAllOnScreenFrameSetViewWithRootConfig:(id)a0 offsetHeight:(double)a1 listViewTop:(double)a2;
- (void)removeFrameSetViewWithRootConfig:(id)a0 frameSetName:(id)a1;
- (void)removeAllFrameSetViewWithRootConfig:(id)a0;
- (void)activeWithViewController:(id)a0;
- (void)deactive;
- (void)start;
- (void)onMainScriptInjected:(id)a0;
- (void)destroy;
- (void)notifyJsEventWithJsEvent:(id)a0;
- (void)onJSException:(id)a0 msg:(id)a1 extra:(id)a2;
- (void)onDestroy:(int)a0;
- (void)onCanvasViewFirstFrameRendered:(unsigned int)a0;
- (id)getBizAppConfig;
- (void)redraw;
- (long long)addCustomViewWithView:(id)a0;
- (id)getParentViewController;
- (id)getAppId;
- (id)init;
- (void).cxx_destruct;

@end
