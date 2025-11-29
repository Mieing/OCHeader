@class LocalJSLogicBase, NSString, WSResultViewLogic, WKWebSearchView, WSJSEventHandler, WSLocalTemplateConfig;

@interface WSLocalTemplateController : NSObject <WSJSEventHandleDelegate, FTSWebSearchDataSource>

@property (retain, nonatomic) WSJSEventHandler *deprecatedSearchEventHandler;
@property (retain, nonatomic) WSResultViewLogic *resultViewLogic;
@property (retain, nonatomic) WKWebSearchView *webview;
@property (retain, nonatomic) WSLocalTemplateConfig *config;
@property (readonly, nonatomic) LocalJSLogicBase *jsLogic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getPreloadInstanceWith:(id)a0 webviewOwner:(id)a1;
+ (void)removeCache;
+ (void)preHeatSearchH5WithForceDarkMode:(BOOL)a0;
+ (void)preHeatSearchH5WithForceDarkMode:(BOOL)a0 shouldBeReusable:(BOOL)a1;
+ (void)removePreHeatSearchH5;

- (void)_fetchH5FileThenLoad;
- (void)tryRecycleSelf;
- (id)initWithConfig:(id)a0;
- (void)updateConfig:(id)a0;
- (void)initWebview;
- (void)initJSLogic;
- (void)loadH5File;
- (void)loadH5FileFor:(unsigned long long)a0;
- (void)setContentVC:(id)a0;
- (id)viewStacks;
- (id)htmlPath;
- (unsigned int)h5Version;
- (void).cxx_destruct;

@end
