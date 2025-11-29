@class LynxView, LynxPageReloadHelper;
@protocol LynxBaseInspectorOwner, LynxViewStateListener, LynxLogBoxProtocol;

@interface LynxDevtool : NSObject {
    LynxView *_lynxView;
    id<LynxLogBoxProtocol> _logbox;
    LynxPageReloadHelper *_reloader;
    id<LynxViewStateListener> _lynxViewStateListener;
}

@property (retain, nonatomic) id<LynxBaseInspectorOwner> owner;

- (void)handleLongPress;
- (void)onEnterBackground;
- (void)onEnterForeground;
- (void)attachLynxView:(id)a0;
- (id)initWithLynxView:(id)a0 debuggable:(BOOL)a1;
- (void)onBackgroundRuntimeCreated:(id)a0 groupThreadName:(id)a1;
- (void)onStandaloneRuntimeLoadFromURL:(id)a0;
- (void)attachDebugBridge:(id)a0;
- (void)onResetDataWithTemplateData:(id)a0;
- (void)onTemplateAssemblerCreated:(long long)a0;
- (void)onMovedToWindow;
- (void)onLoadFinished;
- (void)onPageUpdate;
- (void)downloadResource:(id)a0 callback:(id /* block */)a1;
- (void)onTemplateLoadSuccess:(id)a0;
- (void)onGlobalPropsUpdated:(id)a0;
- (void)onPerfMetricsEvent:(id)a0 withData:(id)a1;
- (id)debugInfoUrl:(id)a0;
- (void)onReceiveMessageEvent:(id)a0;
- (void)setDispatchMessageEventBlock:(id /* block */)a0;
- (void)onLoadFromLocalFile:(id)a0 withURL:(id)a1 initData:(id)a2;
- (void)onLoadFromURL:(id)a0 initData:(id)a1 postURL:(id)a2;
- (void)onLoadFromBundle:(id)a0 withURL:(id)a1 initData:(id)a2;
- (void)onUpdateDataWithTemplateData:(id)a0;
- (void)attachLynxUIOwner:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)registerModule:(id)a0;
- (void)showErrorMessage:(id)a0;

@end
