@class MBCommonAdapter, MagicBrushBiz, NSString, _TtC6WeChat27MagicBrushDemoPkgManagement, _TtC6WeChat24MagicBrushVConsoleHelper, UIView;

@interface MagicBrushDemoLogic : NSObject <IMBFileSystem, IMBPkgManagement, MBCommonAdapterDelegate, IMBViewDelegate, IMBLifecycle>

@property (retain, nonatomic) MagicBrushBiz *magicbrush;
@property (retain, nonatomic) MBCommonAdapter *mbCommonAdapter;
@property (retain, nonatomic) _TtC6WeChat24MagicBrushVConsoleHelper *mbVConsoleHelper;
@property (retain, nonatomic) _TtC6WeChat27MagicBrushDemoPkgManagement *pkgManagement;
@property (nonatomic) BOOL isFullPage;
@property (weak, nonatomic) UIView *containerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithIsFullPage:(BOOL)a0;
- (void)start;
- (void)stop;
- (void)dealloc;
- (void)onCanvasViewCreated:(unsigned int)a0 view:(id)a1;
- (void)onCanvasViewDestroy:(unsigned int)a0 view:(id)a1;
- (void)onCanvasViewFirstFrameRendered:(unsigned int)a0;
- (void)onCanvasViewLayout:(unsigned int)a0 view:(id)a1 left:(float)a2 top:(float)a3 width:(float)a4 height:(float)a5;
- (id)getFileDataByPath:(id)a0;
- (void)provideMainScript:(id /* block */)a0;
- (id)provideFileSystem;
- (unsigned int)getDebugModeType;
- (id)getParentViewController;
- (id)getAppId;
- (void)onCreated;
- (void)onMainScriptInjected:(id)a0;
- (void).cxx_destruct;

@end
