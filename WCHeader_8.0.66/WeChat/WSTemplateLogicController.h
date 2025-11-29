@class NSString, NSDictionary, WKWebView, WSTemplateBaseJSHandler, WSTemplateJSLogicImpl;
@protocol YYWebViewInterface;

@interface WSTemplateLogicController : NSObject <WSTemplateBaseJSHandlerDelegate>

@property (retain, nonatomic) NSString *templatePath;
@property (retain, nonatomic) NSDictionary *oriUrlParams;
@property (retain, nonatomic) WSTemplateBaseJSHandler *jsHandler;
@property (retain, nonatomic) WSTemplateJSLogicImpl *jsLogicImpl;
@property (retain, nonatomic) WKWebView<YYWebViewInterface> *webView;
@property (nonatomic) BOOL shouldEncodeURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadTemplateWithParh:(id)a0 urlParams:(id)a1 jsHandler:(id)a2;
- (void)initWebView;
- (BOOL)loadH5ForWebView;
- (void)sendEventToJSBridge:(id)a0 params:(id)a1;
- (void)ackWithCallBackID:(id)a0 withParams:(id)a1;
- (void)ackWithCallBackID:(id)a0 errorMsg:(id)a1;
- (void).cxx_destruct;

@end
