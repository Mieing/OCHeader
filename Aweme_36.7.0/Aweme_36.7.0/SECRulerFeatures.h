@class NSArray, NSMutableDictionary;

@interface SECRulerFeatures : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _cacheMutex;
}

@property (copy, nonatomic) NSArray *features;
@property (retain, nonatomic) NSMutableDictionary *cachePool;

- (void)setupWithConfig:(id)a0;
- (id)executeWithParams:(id)a0;
- (BOOL)runSingleItem:(id)a0 withParams:(id)a1;
- (BOOL)lookupKey:(id)a0 inCache:(id)a1;
- (void)saveObject:(id)a0 forKey:(id)a1 inCache:(id)a2;
- (id)createCacheWithName:(id)a0;
- (void).cxx_destruct;
- (id)initWithFeatures:(id)a0;
- (void)clearCache;
- (void)dealloc;

@end
