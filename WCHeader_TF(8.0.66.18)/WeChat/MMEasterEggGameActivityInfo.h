@class MMWebViewController, OpenLiteAppInfo, NSString;
@protocol MMEasterEggActivity;

@interface MMEasterEggGameActivityInfo : MMEasterEggBaseActivityInfo <MMWebViewDelegate, MMUIViewControllerExt>

@property (retain, nonatomic) MMWebViewController *webviewController;
@property (retain, nonatomic) id<MMEasterEggActivity> curActivity;
@property (nonatomic) double delaySeconds;
@property (nonatomic) BOOL isWebviewCached;
@property (retain, nonatomic) OpenLiteAppInfo *openLiteAppInfo;
@property (retain, nonatomic) NSString *URLString;
@property (retain, nonatomic) NSString *liteAppUrl;
@property (nonatomic) BOOL needPreload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activityNodeName;

- (Class)activityClass;
- (id)accessibilityLabel;
- (id)initWithActivityNode:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0 directoryPath:(id)a1 clientEggVersion:(unsigned long long)a2;
- (void)tryParseURLStringFromActivityNode:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
- (BOOL)isValid;
- (void)easterEggDidStart:(id)a0;
- (BOOL)canOpenLiteApp;
- (void)openLiteAppOnViewController:(id)a0;
- (void)MMUIViewControllerDidBeRemoved:(id)a0;
- (void)initializeWebView:(id)a0 preload:(BOOL)a1;
- (void)showWebControllerOnViewController:(id)a0 activity:(id)a1;
- (void)evaluateJavaScriptFromString:(id)a0;
- (void)webViewDidReturn:(id)a0;
- (void)releaseWebView;
- (void)onEasterEggEnd;
- (void)afterDelay;
- (void).cxx_destruct;

@end
