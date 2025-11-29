@class SECYcavClassifyResult, SECWebViewSafetyEvent, SECTessaRepo, SECRouterTessa, NSString, SECStandardURL, SECHybridPageTrace, SECRouterSample;

@interface SECHybridTessaDataWorker : NSObject <SECDataWorker>

@property (retain, nonatomic) SECWebViewSafetyEvent *event;
@property (retain, nonatomic) SECHybridPageTrace *hybrid;
@property (retain, nonatomic) SECRouterTessa *hybridTessa;
@property (retain, nonatomic) SECRouterSample *hybridSample;
@property (retain, nonatomic) SECStandardURL *routerURL;
@property (retain, nonatomic) SECTessaRepo *repo;
@property (retain, nonatomic) SECYcavClassifyResult *classifyResult;
@property (nonatomic) BOOL shouldIgnore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)classifyTasks;
- (void)consumeEventWithExtraInfo:(id)a0;
- (void)setupTracerConfigIfNeeded;
- (void)receiveClassifyResult:(id)a0;
- (void)traceDataFrom;
- (void)markTessaFromLog:(id)a0;
- (id)initWithEvent:(id)a0;
- (void).cxx_destruct;
- (void)prepare;
- (id)extraInfo;

@end
