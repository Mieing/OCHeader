@class NSString;
@protocol IESLiveTracker;

@interface AWELiveWebViewServiceImp : NSObject <IESLiveWebViewService>

@property (retain, nonatomic) id<IESLiveTracker> tracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)secureLinkBaseUrl;
- (void)registerUserAgent;
- (id)hostUserAgent;
- (id)whiteList;
- (id)XTokenHeaders;
- (void)unregisterClass;
- (id)piperHandlers;
- (BOOL)inWhiteListWith:(id)a0;
- (void)registerUserAgentWithWKWebView:(id)a0;
- (void)configInnerDomainsIfNeed;
- (void)addInnerDomainsFromSettings;
- (BOOL)shouldFailedOf:(id)a0;
- (id)getOutSideWebViewHost;
- (id)useBtdURLEncode:(id)a0;
- (void)registerCanvasViewForLynxView:(id)a0;
- (void)showInjectedPanelWebViewWithURL:(id)a0 configData:(id)a1 fromVC:(id)a2;
- (void)unregisterUserAgent;
- (void)configInnerDomains;
- (void)registerClass;
- (void).cxx_destruct;

@end
