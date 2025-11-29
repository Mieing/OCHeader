@class MagicBrushBiz, NSString, WKWebView, WebGLAudioManager, WeAvatarPackageLogic;

@interface WeAvatarScreenView : UIView <IMBViewDelegate, IMBPkgManagement, IMBFileSystem, IMBLifecycle, IMBBizContextDelegate>

@property (retain, nonatomic) MagicBrushBiz *biz;
@property (retain, nonatomic) WKWebView *innerRuntimeView;
@property (retain, nonatomic) WeAvatarPackageLogic *pkgLogic;
@property (nonatomic) unsigned char isOnRNNoise;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } glFrame;
@property (retain, nonatomic) WebGLAudioManager *audioManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setAvatarViewHidden:(BOOL)a0 InViews:(id)a1;

- (void)destroy;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dispatchEvent:(id)a0 args:(id)a1;
- (void)evaluateScript:(id)a0 withSourceURL:(id)a1;
- (void)injectLibs;
- (void)injectFinderUserName:(id)a0;
- (void)injectScripts;
- (void)prepareAndInjectCodeAsync;
- (void)onCanvasViewCreated:(unsigned int)a0 view:(id)a1;
- (void)onCanvasViewLayout:(unsigned int)a0 view:(id)a1 left:(float)a2 top:(float)a3 width:(float)a4 height:(float)a5;
- (void)onCanvasViewDestroy:(unsigned int)a0 view:(id)a1;
- (void)provideMainScript:(id /* block */)a0;
- (id)provideFileSystem;
- (id)getFileDataByPath:(id)a0;
- (void)onCreated;
- (void)onMainScriptInjected:(id)a0;
- (void)onResume;
- (void)onPause;
- (void)onDestroy:(int)a0;
- (void)onJSException:(id)a0 msg:(id)a1 extra:(id)a2;
- (void).cxx_destruct;

@end
