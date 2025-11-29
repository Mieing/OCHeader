@class IESCacheDictionaryRef;

@interface IESAppContextConfig : NSObject

@property (nonatomic) BOOL diOptEnable;
@property (nonatomic) BOOL diCacheEnable;
@property (retain, nonatomic) IESCacheDictionaryRef *caches;
@property (retain, nonatomic) IESCacheDictionaryRef *protocolNameCaches;
@property (nonatomic) struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } cache_rw_lock;
@property (nonatomic) struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } pro_rw_lock;
@property (readonly, nonatomic) BOOL diGlobalEnable;
@property (readonly, nonatomic) BOOL protocolKeyOpt;

+ (id)config;

- (id)itemWithProtocol:(id)a0 appContext:(id)a1;
- (id)stringNameWithProtocol:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
