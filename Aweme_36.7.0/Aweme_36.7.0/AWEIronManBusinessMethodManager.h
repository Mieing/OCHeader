@class NSMutableDictionary;

@interface AWEIronManBusinessMethodManager : NSObject

@property (nonatomic) struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } gRWLock;
@property (retain, nonatomic) NSMutableDictionary *businessMethodMap;

+ (id)sharedManager;

- (void)registerEventName:(id)a0 handler:(id /* block */)a1;
- (void)bdp_callBusinessMethodWithParam:(id)a0 completion:(id /* block */)a1;
- (id)bdp_callBusinessMethodSyncWithParam:(id)a0 error:(id *)a1;
- (void)notifyAppWithUniqueID:(id)a0 eventName:(id)a1 jsonString:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
