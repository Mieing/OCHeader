@class NSString, ADFGWebModel, ADFeelGoodConfig, ADFGWKWebView;

@interface ADFGWebView : UIView <ADFGWKWebViewDelegate>

@property (retain, nonatomic) ADFGWKWebView *webView;
@property (retain, nonatomic) ADFGWebModel *webModel;
@property (retain, nonatomic) ADFeelGoodConfig *configModel;
@property (copy, nonatomic) id /* block */ finishCallback;
@property (copy, nonatomic) id /* block */ failedCallback;
@property (copy, nonatomic) id /* block */ closeCallback;
@property (copy, nonatomic) id /* block */ containerHeightCallback;
@property (copy, nonatomic) id /* block */ onMessageCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fireEvent:(id)a0 params:(id)a1 resultBlock:(id /* block */)a2;
- (void)initViews;
- (BOOL)startRequsetWithWebModel:(id)a0 configModel:(id)a1 error:(id *)a2;
- (void)registerJSBridge;
- (void)close;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)dealloc;
- (void)webView:(id)a0 didFailLoadWithError:(id)a1;
- (void)webViewDidStartLoad:(id)a0;
- (void)webViewDidFinishLoad:(id)a0;

@end
