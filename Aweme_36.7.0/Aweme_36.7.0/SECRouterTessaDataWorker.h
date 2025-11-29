@class SECYcavClassifyResult, SECTessaRepo, SECRouteTrafficEvent, SECRouterTessa, SECRouteTrace, NSString, SECStandardURL, SECRouteRecord, SECRouterSample;

@interface SECRouterTessaDataWorker : NSObject <SECDataWorker>

@property (retain, nonatomic) SECRouteTrafficEvent *event;
@property (retain, nonatomic) SECRouteTrace *router;
@property (retain, nonatomic) SECRouterTessa *routerTessa;
@property (retain, nonatomic) SECRouterSample *routerSample;
@property (retain, nonatomic) SECStandardURL *routerURL;
@property (retain, nonatomic) SECYcavClassifyResult *classifyResult;
@property (nonatomic) BOOL isCheckinEvent;
@property (retain, nonatomic) SECTessaRepo *repo;
@property (retain, nonatomic) SECRouteRecord *routeRecord;
@property (nonatomic) BOOL shouldIgnore;
@property (nonatomic) BOOL isHttpScheme;
@property (nonatomic) BOOL shouldIgnoreClassify;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)classifyTasks;
- (void)consumeEventWithExtraInfo:(id)a0;
- (void)setupTracerConfigIfNeeded;
- (void)receiveClassifyResult:(id)a0;
- (void)traceDataFrom;
- (BOOL)isTessaSchemeValid:(id)a0;
- (void)detectDeeplinkFeature;
- (void)updateTessaRepo;
- (void)markRouterTessaFromLog:(id)a0;
- (id)initWithEvent:(id)a0;
- (void).cxx_destruct;
- (void)prepare;

@end
