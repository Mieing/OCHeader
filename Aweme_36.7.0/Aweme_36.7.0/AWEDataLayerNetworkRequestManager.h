@class NSMapTable, NSMutableDictionary, NSString, NSObject;
@protocol OS_dispatch_queue, AWEDataLayerNetworkProtocol;

@interface AWEDataLayerNetworkRequestManager : NSObject <AWEDataLayerNetworkRequestRetryManagerDelegate>

@property (retain, nonatomic) id<AWEDataLayerNetworkProtocol> networkImpl;
@property (retain, nonatomic) NSMutableDictionary *requestsMap;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } requestsMapLock;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *requestQueue;
@property (retain, nonatomic) NSMapTable *tokenToRequestMapTable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)setupNetworkImpl:(id)a0;
- (id)getAllTokenWithRequestIdentifier:(id)a0;
- (void)requestWithNetworkProvider:(id)a0 token:(id)a1 config:(id)a2 completion:(id /* block */)a3;
- (void)startRequest:(id)a0;
- (void)finishRequest:(id)a0 response:(id)a1;
- (BOOL)enqueueRetryRequest:(id)a0;
- (void)handleWaitingRequestsWithRequest:(id)a0;
- (void)manager:(id)a0 handleRetryRequest:(id)a1;
- (void).cxx_destruct;

@end
