@class NSString, WKWebView;
@protocol CJBizWebDelegate;

@interface CJPayWebViewUtil : NSObject <CJPayWebViewService, CJBizWebDelegate>

@property (copy, nonatomic) NSString *host;
@property (retain, nonatomic) WKWebView *wkWebView;
@property (retain, nonatomic) Class klass;
@property (retain, nonatomic) id<CJBizWebDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerComponents;
+ (id)sharedUtil;

- (void)i_gotoIMServiceWithAppID:(id)a0 fromVC:(id)a1;
- (void)i_openScheme:(id)a0 withDelegate:(id)a1;
- (void)i_openScheme:(id)a0 callBack:(id /* block */)a1;
- (void)i_openSchemeByNtvVC:(id)a0 fromVC:(id)a1 withInfo:(id)a2 withDelegate:(id)a3;
- (void)i_registerBizDelegate:(id)a0;
- (void)i_openCjSchemaByHost:(id)a0;
- (void)i_openCjSchemaByHost:(id)a0 fromVC:(id)a1 useModal:(BOOL)a2;
- (BOOL)openPath:(id)a0 withParams:(id)a1;
- (void)openH5ModalViewFrom:(id)a0 toUrl:(id)a1;
- (void)gotoWebViewControllerFrom:(id)a0 toUrl:(id)a1 params:(id)a2 nativeStyleParams:(id)a3 closeCallBack:(id /* block */)a4;
- (void)gotoWebViewControllerFrom:(id)a0 toUrl:(id)a1;
- (void)setPiperClass:(Class)a0;
- (void)setupUAWithCompletion:(id /* block */)a0;
- (void)needLogin:(id /* block */)a0;
- (void)openCJScheme:(id)a0;
- (void)openCJScheme:(id)a0 fromVC:(id)a1 useModal:(BOOL)a2;
- (void)openH5ModalViewFrom:(id)a0 toUrl:(id)a1 style:(long long)a2 showLoading:(BOOL)a3 backgroundColor:(id)a4 animated:(BOOL)a5 closeCallBack:(id /* block */)a6 backBlock:(id /* block */)a7 justCloseBlock:(id /* block */)a8;
- (id)getWebViewUA;
- (id)obtainSystemUAAndCJPayUAFromCache;
- (id)removeDIDFromUAIfNeeded:(id)a0 url:(id)a1;
- (void)gotoWebViewControllerFrom:(id)a0 toScheme:(id)a1;
- (void)gotoWebViewControllerFrom:(id)a0 toUrl:(id)a1 params:(id)a2;
- (void)openH5ModalViewFrom:(id)a0 toUrl:(id)a1 style:(long long)a2 showLoading:(BOOL)a3 backgroundColor:(id)a4 animated:(BOOL)a5 closeCallBack:(id /* block */)a6;
- (void)gotoWebViewControllerFrom:(id)a0 toUrl:(id)a1 params:(id)a2 nativeStyleParams:(id)a3;
- (void)gotoWebViewControllerFrom:(id)a0 useNewNavi:(BOOL)a1 toUrl:(id)a2 params:(id)a3 nativeStyleParams:(id)a4 closeCallBack:(id /* block */)a5;
- (void)gotoWebViewControllerFrom:(id)a0 toUrl:(id)a1 params:(id)a2 closeCallBack:(id /* block */)a3;
- (id)buildWebViewControllerWithUrl:(id)a0 fromVC:(id)a1 params:(id)a2 nativeStyleParams:(id)a3 closeCallBack:(id /* block */)a4;
- (id)p_extraInfoParam;
- (void)p_openScheme:(id)a0 callBack:(id /* block */)a1;
- (BOOL)isCJPayWebView:(id)a0;
- (id)prepareBeforeGotoWebVCWithURL:(id)a0;
- (BOOL)isURLInSecDomains:(id)a0;
- (id)p_originalCJPayUserAgent;
- (long long)p_getWebviewContainerStyle:(id)a0;
- (BOOL)handlesURL:(id)a0;
- (void)gotoWebViewController:(id)a0 webviewStyle:(id)a1 closeCallback:(id /* block */)a2;
- (void).cxx_destruct;
- (void)dealloc;
- (void)logoutAccount;

@end
