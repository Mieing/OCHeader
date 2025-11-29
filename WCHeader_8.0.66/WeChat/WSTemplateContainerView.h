@class NSString, WSWebViewPluginScheduler, WKWebSearchView, WSk1kViewConfig, WSLocalTemplateController, NSNumber, _TtC6WeChat25WSWebviewExceptionCatcher;

@interface WSTemplateContainerView : WSContainerBaseView <WeChat.WSWebViewExceptionHandlerDelegate, WSWebViewPluginableProtocol, WSContainerView>

@property (retain, nonatomic) WSk1kViewConfig *config;
@property (retain, nonatomic) WSLocalTemplateController *templateController;
@property (retain, nonatomic) WKWebSearchView *webview;
@property (retain, nonatomic) NSNumber *categoryId;
@property (retain, nonatomic) _TtC6WeChat25WSWebviewExceptionCatcher *eCatcher;
@property (retain, nonatomic) WSWebViewPluginScheduler *pluginScheduler;
@property (readonly, nonatomic) BOOL isWebviewActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithConfig:(id)a0;
- (void)initViewIfNeed;
- (id)getCategoryId;
- (long long)k1kCategoryId;
- (void)initViewIfNeedFor:(unsigned long long)a0;
- (void)initPlugins;
- (void)updateDaynamicConfig;
- (void)exposed;
- (id)communicator;
- (id)getLocalJSLogic;
- (id)getCurViewController;
- (unsigned long long)localJSBizType;
- (void)reloadWebview;
- (void)exitPagewhenFault;
- (BOOL)enableShowExceptionTip;
- (void)recreateWebview;
- (void)onSwitchToThisView:(id)a0;
- (void).cxx_destruct;

@end
