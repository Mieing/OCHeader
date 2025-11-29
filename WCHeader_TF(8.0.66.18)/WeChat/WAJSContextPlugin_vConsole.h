@class UIViewController;
@protocol IWAVConsoleWebVCHelper;

@interface WAJSContextPlugin_vConsole : WAJSContextPluginBase

@property (retain, nonatomic) UIViewController<IWAVConsoleWebVCHelper> *vConsoleWebVC;

- (void)genVConsoleWebVCWithExtInfo:(id)a0;
- (void)web_view_setHtmlId:(unsigned int)a0;
- (void)web_view_setWebviewId:(unsigned int)a0;
- (unsigned int)web_view_webviewId;
- (void)reloadConsoleView;
- (void)sendEvent:(id)a0 parma:(id)a1;
- (unsigned int)insertChildView:(id)a0 viewId:(unsigned int)a1;
- (id)getVConsoleWebview:(unsigned int)a0;
- (BOOL)removeVConsoleWebview:(unsigned int)a0;
- (void)releaseVConsoleVC;
- (id)web_view;
- (void)web_view_configViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)fetchPublicResLogic;
- (void).cxx_destruct;

@end
