@class NSURL;

@interface MVWebViewController : MMWebViewController

@property (nonatomic) BOOL hasGetFirstA8Key;
@property (copy, nonatomic) id /* block */ webViewDidScrollCallBack;
@property (copy, nonatomic) id /* block */ onGetA8KeyFinishCallBack;
@property (copy, nonatomic) id /* block */ onWebviewReceiveNavigationResponseCallBack;
@property (retain, nonatomic) NSURL *initialUrl;
@property (nonatomic) BOOL webviewDidFinishLoad;

- (id)initWithURL:(id)a0 presentModal:(BOOL)a1 extraInfo:(id)a2 presetUI:(id)a3;
- (void)setupContentBlocker;
- (void)scrollViewDidScroll:(id)a0;
- (void)webViewDidFinishLoad:(id)a0 navigation:(id)a1;
- (void)onGetA8KeyWithRequestUrl:(id)a0 fullUrl:(id)a1 header:(id)a2;
- (void)onGetA8KeyFinishWithRequestUrl:(id)a0 response:(id)a1 reason:(int)a2;
- (void)webViewDidReceiveNavigationResponse:(id)a0 andGetIsCancelNavigation:(BOOL *)a1;
- (BOOL)webView:(id)a0 shouldStartLoadWithRequest:(id)a1 navigationType:(long long)a2 isMainFrame:(BOOL)a3 navigationAction:(id)a4;
- (id)trimmedUrlPath:(id)a0;
- (BOOL)isSameUrlWithLeft:(id)a0 right:(id)a1;
- (BOOL)judgeAllowsAutoMediaPlay;
- (void).cxx_destruct;

@end
