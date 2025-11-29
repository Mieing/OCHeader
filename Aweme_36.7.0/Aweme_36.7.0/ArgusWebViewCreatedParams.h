@class NSString, WKWebView;

@interface ArgusWebViewCreatedParams : ArgusBaseAsepctParams

@property (weak, nonatomic) WKWebView *webView;
@property (copy, nonatomic) NSString *bizId;

- (id)initWithWebView:(id)a0 withBizId:(id)a1;
- (void).cxx_destruct;

@end
