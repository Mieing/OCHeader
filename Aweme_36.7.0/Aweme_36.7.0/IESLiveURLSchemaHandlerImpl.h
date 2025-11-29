@class IESLiveFullLinkMonitorImp, NSString, IESLiveSchemaParserFactory, NSLock, NSMutableArray;
@protocol IESLiveOpenURL, IESLiveCJPayService, IESLiveRouteTrackService, IESLiveInternalRouter;

@interface IESLiveURLSchemaHandlerImpl : NSObject <IESLiveURLSchemaHandler>

@property (retain, nonatomic) id<IESLiveOpenURL> outerURLOpener;
@property (retain, nonatomic) id<IESLiveInternalRouter> internalRouter;
@property (retain, nonatomic) id<IESLiveRouteTrackService> routeTracker;
@property (retain, nonatomic) IESLiveSchemaParserFactory *parserFactory;
@property (retain, nonatomic) NSMutableArray *parserContainer;
@property (retain, nonatomic) id<IESLiveCJPayService> cjpayService;
@property (retain, nonatomic) NSLock *lock;
@property (retain, nonatomic) IESLiveFullLinkMonitorImp *fullLink;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)attachingDIContext;
- (void)openURL:(id)a0 fromInside:(BOOL)a1;
- (void)openURL:(id)a0 fromInside:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)canOpenURL:(id)a0 fromInside:(BOOL)a1;
- (void)openURL:(id)a0 userInfo:(id)a1 fromInside:(BOOL)a2;
- (void)openURL:(id)a0 fromInside:(BOOL)a1 userInfo:(id)a2 openResult:(id /* block */)a3;
- (id)getComponentsWithURLString:(id)a0;
- (void)trackParseSchemaFailedWithType:(id)a0 url:(id)a1;
- (BOOL)canInnerOpenURL:(id)a0;
- (BOOL)canApplicationOpenURL:(id)a0;
- (BOOL)shouldOpenURLWithCJWebView:(id)a0;
- (void)openURL:(id)a0 userInfo:(id)a1 fromInside:(BOOL)a2 completion:(id /* block */)a3;
- (void)p_fullScreenWebview:(id)a0;
- (void)monitorHost:(id)a0 error:(id)a1 service:(id)a2;
- (BOOL)shouldStopHandleSchemeWithParams:(id)a0;
- (BOOL)shouldStopBySecurityFilterWithHost:(id)a0 originURL:(id)a1;
- (BOOL)rewriteScheme:(id)a0 params:(id)a1;
- (void)addHybridMonitorDataToModel:(id)a0 withParser:(id)a1 url:(id)a2;
- (void)schemaFinish:(id)a0;
- (BOOL)shouldExitRoom:(id)a0;
- (void)deleteKeys:(id)a0 params:(id)a1;
- (void)rewriteKeys:(id)a0 params:(id)a1;
- (id)parserURLQueryCondition:(id)a0;
- (BOOL)isInCondition:(id)a0 originParams:(id)a1 host:(id)a2;
- (BOOL)isOpenBroadcastRoom:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
