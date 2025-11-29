@class NSMutableDictionary;

@interface AWEClientAIDynamicModelKeyPathValueCache : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (retain, nonatomic) NSMutableDictionary *cacheMap;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
