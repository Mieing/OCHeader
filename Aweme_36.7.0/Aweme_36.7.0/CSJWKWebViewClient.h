@class CSJAdInfoViewModel, NSMutableDictionary, BUThreadSafeMutableArray, NSString, BUThreadSafeDictionary, NSMutableArray, CSJMaterialMeta;
@protocol CSJWKWebViewClientResponseDelegate, CSJWKWebViewClientInterceptionDelegate;

@interface CSJWKWebViewClient : BUWKWebView <WKScriptMessageHandler>

@property (nonatomic) BOOL offlineMode;
@property (retain, nonatomic) NSMutableDictionary *jsOperationMap;
@property (retain, nonatomic) BUThreadSafeDictionary *logDictinary;
@property (retain, nonatomic) NSMutableArray *scriptMessageHandlerNameArray;
@property (retain, nonatomic) BUThreadSafeMutableArray *interceptArray;
@property (retain, nonatomic) CSJMaterialMeta *targetMaterialMeta;
@property (retain, nonatomic) CSJAdInfoViewModel *targetInfoViewModel;
@property (nonatomic) BOOL reallyRenderSuccess;
@property (nonatomic) double startLoadTime;
@property (retain, nonatomic) BUThreadSafeMutableArray *interceptResourceList;
@property (weak, nonatomic) id<CSJWKWebViewClientInterceptionDelegate> interceptDelegate;
@property (weak, nonatomic) id<CSJWKWebViewClientResponseDelegate> responseDelegate;
@property (nonatomic) BOOL haveTouched;
@property (nonatomic) BOOL didShow;
@property (copy, nonatomic) id /* block */ jsCallNativeBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)ttr_fireEvent:(id)a0 data:(id)a1;
- (void)setCurrentLogType:(id)a0 extraDic:(id)a1;
- (id)getInterceptResourceListDictWithStartTime:(double)a0 url:(id)a1 data:(id)a2 extraDic:(id)a3;
- (id)getInterceptDictWithStartTime:(double)a0 url:(id)a1 type:(id)a2 isCache:(BOOL)a3 extraDic:(id)a4;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })adjustFrameIfNeed:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)pbu_initJSB3Info;
- (void)pbu_removeAllScriptMessageHandlerAndUserScripts;
- (void)pbu_postMessage:(id)a0;
- (void)pbu_fireEvent:(id)a0 params:(id)a1;
- (void)addPCMEventAttributionView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 offlineMode:(BOOL)a1;
- (void)addScriptMessageWithHandler:(id)a0 name:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (double)getCurrentTime;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 configuration:(id)a1;
- (void)userContentController:(id)a0 didReceiveScriptMessage:(id)a1;

@end
