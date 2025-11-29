@class NSString, SECRouteTrace, NSObject;
@protocol OS_dispatch_queue, AWEStorageServiceKVInterface;

@interface AWESECRouteEventMerge : NSObject <SECRouteEventSubscriber> {
    NSObject<OS_dispatch_queue> *_logQueue;
    id<AWEStorageServiceKVInterface> _storage;
}

@property (retain, nonatomic) SECRouteTrace *buffer;
@property (nonatomic) BOOL cacheHasDelivered;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clearTrace;
- (void)loadTracesFromDisk;
- (void)_handleTrafficEvent:(id)a0;
- (void)_handleWebTraceEvent:(id)a0;
- (void)_handleWebSecLinkEvent:(id)a0;
- (void)saveTrace:(id)a0;
- (void)_consumeCacheCompareTo:(id)a0;
- (void)saveTraces:(id)a0;
- (id)_loadCachedTrace;
- (void).cxx_destruct;
- (void)handleEvent:(id)a0;
- (id)init;
- (id)subscriberId;

@end
