@class NSString, WKWebView, NSMutableDictionary;

@interface KryptonWorkerWebView : NSObject <WKNavigationDelegate, WKURLSchemeHandler> {
    struct shared_ptr<lynx::canvas::CanvasApp> { struct CanvasApp *__ptr_; struct __shared_weak_count *__cntrl_; } native_app_;
    struct shared_ptr<lynx::canvas::remote::RemoteEnvImpl> { struct RemoteEnvImpl *__ptr_; struct __shared_weak_count *__cntrl_; } remote_;
    struct weak_ptr<InstanceGuard<lynx::canvas::Worker>> { void *__ptr_; struct __shared_weak_count *__cntrl_; } worker_guard_;
}

@property (retain, nonatomic) WKWebView *webview;
@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) NSString *envProps;
@property (retain, nonatomic) NSMutableDictionary *cachedBuffer;
@property (retain, nonatomic) NSMutableDictionary *cachedURLTask;
@property (copy, nonatomic) id /* block */ onBootstrapFinished;
@property (nonatomic) int lastRequestID;
@property (nonatomic) BOOL bootstrapped;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void *)remoteEnv;
- (void)runBuffer:(id)a0 callback:(id /* block */)a1;
- (void)finishSchemeTask:(id)a0 data:(id)a1 statusCode:(long long)a2;
- (void)bootstrapWithWorkerGuard:(struct weak_ptr<InstanceGuard<lynx::canvas::Worker>> { void *x0; struct __shared_weak_count *x1; })a0 path:(id)a1 envProps:(id)a2 onFinish:(id /* block */)a3;
- (void)cacheBuffer:(struct unique_ptr<lynx::canvas::DataHolder, std::default_delete<lynx::canvas::DataHolder>> { struct DataHolder *x0; })a0 key:(unsigned int)a1;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void)webViewWebContentProcessDidTerminate:(id)a0;
- (void).cxx_destruct;
- (void)webView:(id)a0 startURLSchemeTask:(id)a1;
- (void)dispose;
- (void)prepare;
- (id).cxx_construct;
- (void)dealloc;
- (void)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;
- (void)webView:(id)a0 stopURLSchemeTask:(id)a1;
- (id)initWithApp:(struct shared_ptr<lynx::canvas::CanvasApp> { struct CanvasApp *x0; struct __shared_weak_count *x1; })a0;

@end
