@class ArgusAspectContext, NSString, ArgusWebLoadUrlParams, ArgusAspectVerifyResult, WKWebView, BDXThreadSafeDictionary, ArgusWebViewContext;
@protocol ArgusWebBizServiceProtocol;

@interface ArgusWebDelegate : ArgusBaseDelegate

@property (copy, nonatomic) NSString *entryUrl;
@property (retain, nonatomic) ArgusAspectContext *lastVerifyContext;
@property (retain, nonatomic) ArgusWebLoadUrlParams *lastLoadUrl;
@property (retain, nonatomic) ArgusAspectVerifyResult *lastLoadUrlVerifyResult;
@property (copy, nonatomic) NSString *lastSCCReportUrl;
@property (copy, nonatomic) NSString *lastSeclinkReportUrl;
@property (weak, nonatomic) WKWebView *weakWebView;
@property (copy, nonatomic) NSString *lastReloadSecUrl;
@property (retain, nonatomic) BDXThreadSafeDictionary *urlCacheVerifyResult;
@property (retain, nonatomic) id<ArgusWebBizServiceProtocol> bizService;
@property (retain, nonatomic) ArgusWebViewContext *viewContext;
@property (nonatomic) BOOL enableSecureLimitShareCookie;

- (void)handleSecLinkRiskNotification:(id)a0;
- (id)setupStrategyEngine;
- (void)_addSecLinkObserver:(id)a0;
- (BOOL)shouldSkipVerify:(id)a0;
- (id)createParams:(id)a0 request:(id)a1;
- (void)_updateLoadUrlInfoAndAddReportData:(id)a0 params:(id)a1 context:(id)a2;
- (void)handleSecLinkServerResponseNotification:(id)a0;
- (BOOL)isReloadBySeclink:(id)a0;
- (void)_removeSecLinkObserver;
- (void)_reportWebLoad;
- (id)verifyLoadRequest:(id)a0 withRequest:(id)a1;
- (id)verifyWebViewCreated:(id)a0 withBizId:(id)a1;
- (id)verifyNavigateAction:(id)a0 withNavigationAction:(id)a1 withDecisionHandler:(id /* block */)a2;
- (void)updateSCCVerifyResult:(id)a0 intercept:(BOOL)a1 level:(unsigned long long)a2 forReason:(id)a3 withBlockStyle:(id)a4;
- (void).cxx_destruct;
- (id)initWithWebView:(id)a0;
- (void)dealloc;

@end
