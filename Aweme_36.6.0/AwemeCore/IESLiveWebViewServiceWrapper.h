@class NSString;
@protocol IESLiveWebViewService;

@interface IESLiveWebViewServiceWrapper : NSObject <IESLiveWebViewService>

@property (retain, nonatomic) id<IESLiveWebViewService> service;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)secureLinkBaseUrl;
- (id)hostUserAgent;
- (id)fetchSystemUserAgent;
- (id)whiteList;
- (id)XTokenHeaders;
- (void)unregisterClass;
- (id)piperHandlers;
- (BOOL)inWhiteListWith:(id)a0;
- (void)forceFetchSystemUserAgent;
- (void)registerUserAgentWithWKWebView:(id)a0;
- (void)configInnerDomainsIfNeed;
- (void)addInnerDomainsFromSettings;
- (BOOL)shouldFailedOf:(id)a0;
- (id)getOutSideWebViewHost;
- (id)useBtdURLEncode:(id)a0;
- (void)forceOffline;
- (void)closeForceOffline;
- (BOOL)isOfflineForURL:(id)a0;
- (void)registerCanvasViewForLynxView:(id)a0;
- (id)offlineMetaForURL:(id)a0;
- (id)liveHybridAid;
- (void)setUpBridgeWithLynxView:(id)a0;
- (id)commonGlobalPropertiesWithURL:(id)a0 routerParams:(id)a1;
- (void)showInjectedPanelWebViewWithURL:(id)a0 configData:(id)a1 fromVC:(id)a2;
- (id)initWithWebViewService:(id)a0;
- (void)registerClass;
- (void).cxx_destruct;
- (id)placeHolderView;

@end
