@class IESLiveBackendRequestTracker, NSArray, NSMutableDictionary, IESLivePreloadRequestUnit, NSString;

@interface IESLiveBackendRequestEntity : IESLivePreloadRequestBaseImpl <IESLiveBackendRequestControlProtocol>

@property (retain, nonatomic) NSArray *backendImpls;
@property (retain, nonatomic) NSMutableDictionary *subscribeItems;
@property (retain, nonatomic) IESLiveBackendRequestTracker *tracker;
@property (nonatomic) double requestTimeInterval;
@property (weak, nonatomic) IESLivePreloadRequestUnit *requestUnit;
@property (weak, nonatomic) IESLiveBackendRequestEntity *subEntity;
@property (copy, nonatomic) id /* block */ realRequestImplsFilter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)requestBusinessIdentifier;

- (id)traceContext;
- (id)paramDictionary;
- (BOOL)subscribeBackendBizPath:(id)a0 identifier:(id)a1 complete:(id /* block */)a2;
- (void)removeSubscriberBackendBizPath:(id)a0 identifier:(id)a1;
- (id)stateWithBackendBizPath:(id)a0;
- (void)traceConsumeDataTimeWithBizPath:(id)a0;
- (void)traceConsumeDataTimeWithBizPath:(id)a0 extra:(id)a1;
- (void)preloadBindService;
- (BOOL)canRequestInStage:(unsigned long long)a0;
- (unsigned long long)preloadRequestMethod;
- (id)customRequest;
- (void)preloadRequestWillRequest;
- (void)preloadRequestDidCompleteWithRequest:(id)a0;
- (id)getRealBackendImpls;
- (void)updatePreloadRequestParam:(id)a0;
- (BOOL)chunkedEnable;
- (id)subscribeWithBizPath:(id)a0 needCreate:(BOOL)a1;
- (void)traceBackend:(id)a0 chunk:(BOOL)a1;
- (id)implWithPath:(id)a0;
- (void)receiveChunkedData:(id)a0;
- (BOOL)containImplWithBizPath:(id)a0;
- (BOOL)checkNotifyResult:(id)a0;
- (void)updateBatchImpls:(id)a0;
- (void).cxx_destruct;
- (void)clear;
- (id)urlPath;
- (Class)modelClass;
- (unsigned long long)responseFormat;

@end
