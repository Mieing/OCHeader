@class NSString;
@protocol IESLiveAppInfo, IESLiveMonitor, IESLiveWebViewProtocol, IESHYHybridViewLifecycleProtocol, IESLiveHybridContainerDelegate, IESLiveURLSchemaHandler, IESLiveAlertFactory, IESLiveWebViewService;

@interface IESLiveWKWebViewDelegateWrapper : NSObject <WKNavigationDelegate>

@property (weak, nonatomic) id<IESLiveHybridContainerDelegate> realDelegate;
@property (weak, nonatomic) id<IESHYHybridViewLifecycleProtocol> realLifeCycleDelegate;
@property (weak, nonatomic) id<IESLiveWebViewProtocol> webViewInstance;
@property (retain, nonatomic) id<IESLiveWebViewService> webViewService;
@property (retain, nonatomic) id<IESLiveURLSchemaHandler> urlSchemaHandler;
@property (retain, nonatomic) id<IESLiveMonitor> monitor;
@property (retain, nonatomic) id<IESLiveAppInfo> appInfo;
@property (retain, nonatomic) id<IESLiveAlertFactory> alertFactory;
@property (copy, nonatomic) NSString *currentURL;
@property (nonatomic) double currentTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRealDelegate:(id)a0;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void).cxx_destruct;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (void)webView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;
- (void)webView:(id)a0 didStartProvisionalNavigation:(id)a1;
- (void)webView:(id)a0 decidePolicyForNavigationResponse:(id)a1 decisionHandler:(id /* block */)a2;

@end
