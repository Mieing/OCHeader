@class NSMutableDictionary;

@interface AWEECNativePrefetchCertManager : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (retain, nonatomic) NSMutableDictionary *prefetchRequestMap;

+ (id)sharedManager;

- (id)getCacheWithCertId:(id)a0;
- (id)setCacheWithCertId:(id)a0 cache:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
