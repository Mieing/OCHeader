@class FWFInstanceManager, NSBundle, FWFAssetManager;
@protocol FlutterBinaryMessenger;

@interface FWFWebViewHostApiImpl : NSObject <FWFWKWebViewHostApi>

@property (weak, nonatomic) id<FlutterBinaryMessenger> binaryMessenger;
@property (weak, nonatomic) FWFInstanceManager *instanceManager;
@property (retain) NSBundle *bundle;
@property (retain) FWFAssetManager *assetManager;

+ (id)errorForURLString:(id)a0;

- (id)initWithBinaryMessenger:(id)a0 instanceManager:(id)a1;
- (id)initWithBinaryMessenger:(id)a0 instanceManager:(id)a1 bundle:(id)a2 assetManager:(id)a3;
- (id)webViewForIdentifier:(long long)a0;
- (void)createWithIdentifier:(long long)a0 configurationIdentifier:(long long)a1 error:(id *)a2;
- (void)loadRequestForWebViewWithIdentifier:(long long)a0 request:(id)a1 error:(id *)a2;
- (void)setCustomUserAgentForWebViewWithIdentifier:(long long)a0 userAgent:(id)a1 error:(id *)a2;
- (id)canGoBackForWebViewWithIdentifier:(long long)a0 error:(id *)a1;
- (id)URLForWebViewWithIdentifier:(long long)a0 error:(id *)a1;
- (id)canGoForwardForWebViewWithIdentifier:(long long)a0 error:(id *)a1;
- (id)estimatedProgressForWebViewWithIdentifier:(long long)a0 error:(id *)a1;
- (void)evaluateJavaScriptForWebViewWithIdentifier:(long long)a0 javaScriptString:(id)a1 completion:(id /* block */)a2;
- (void)setInspectableForWebViewWithIdentifier:(long long)a0 inspectable:(BOOL)a1 error:(id *)a2;
- (void)goBackForWebViewWithIdentifier:(long long)a0 error:(id *)a1;
- (void)goForwardForWebViewWithIdentifier:(long long)a0 error:(id *)a1;
- (void)loadAssetForWebViewWithIdentifier:(long long)a0 assetKey:(id)a1 error:(id *)a2;
- (void)loadFileForWebViewWithIdentifier:(long long)a0 fileURL:(id)a1 readAccessURL:(id)a2 error:(id *)a3;
- (void)loadHTMLForWebViewWithIdentifier:(long long)a0 HTMLString:(id)a1 baseURL:(id)a2 error:(id *)a3;
- (void)reloadWebViewWithIdentifier:(long long)a0 error:(id *)a1;
- (void)setAllowsBackForwardForWebViewWithIdentifier:(long long)a0 isAllowed:(BOOL)a1 error:(id *)a2;
- (void)setNavigationDelegateForWebViewWithIdentifier:(long long)a0 delegateIdentifier:(id)a1 error:(id *)a2;
- (void)setUIDelegateForWebViewWithIdentifier:(long long)a0 delegateIdentifier:(id)a1 error:(id *)a2;
- (id)titleForWebViewWithIdentifier:(long long)a0 error:(id *)a1;
- (id)customUserAgentForWebViewWithIdentifier:(long long)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
