@class NSString, UIViewController, NSMutableDictionary;
@protocol IWAHTMLWebVCHelper;

@interface WAWebViewPlugin_HTMLWeb : WAWebViewPlugin_embedView <IWAHTMLWebVCDelegate, IWAWebViewPlugin_HTMLWeb>

@property (retain, nonatomic) UIViewController<IWAHTMLWebVCHelper> *htmlWebVC;
@property (retain, nonatomic) NSString *javascriptForDisappear;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSMutableDictionary *enableScrollDic;

- (id)init;
- (void)dealloc;
- (void)sendEvent:(id)a0 parma:(id)a1;
- (BOOL)handleEvent:(unsigned long long)a0 userInfo:(id)a1;
- (void)insertHtmlVCIfNeed;
- (void)onUIApplicationWillResignActiveNotification;
- (void)onViewWillDisappear;
- (void)runJavascriptForDisappear;
- (void)webviewDidFinish:(id)a0;
- (void)onTranslateFinish:(BOOL)a0;
- (void)onTranslateRevertFinish:(BOOL)a0;
- (void)webviewControllerDidReceiveScriptMessage:(id)a0 handler:(id)a1;
- (void)genHtmlVCWithExtInfo:(id)a0;
- (void)releaseHtmlVC;
- (BOOL)web_view_isExist;
- (id)web_view;
- (void)web_view_setHtmlId:(unsigned int)a0;
- (void)web_view_setWebviewId:(unsigned int)a0;
- (unsigned int)web_view_webviewId;
- (void)web_view_setBackgroundColor:(id)a0;
- (void)web_view_configViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)web_view_handleInsertHTMLDone;
- (id)web_view_getCurrentUrl;
- (void)web_view_goToUrl:(id)a0;
- (BOOL)web_view_canGoBack;
- (void)web_view_goBack;
- (void)web_view_evaluateJavascript:(id)a0 completion:(id /* block */)a1;
- (void)web_view_runCDPCommand:(id)a0;
- (void)web_view_getElementFrameWithXPath:(id)a0 completion:(id /* block */)a1;
- (void)web_view_captureLongSnapshotWithCompletion:(id /* block */)a0;
- (id)web_backNavigationGesture;
- (void)web_view_setBizDomainList:(id)a0;
- (void)translate;
- (void)translateRevert;
- (void).cxx_destruct;

@end
