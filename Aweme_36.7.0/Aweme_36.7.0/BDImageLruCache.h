@class BDImageLinkedMap, NSString, BDImageWeakCache;

@interface BDImageLruCache : NSObject <BDMemoryCache>

@property (nonatomic) BOOL clearMemoryOnMemoryWarning;
@property (nonatomic) BOOL clearMemoryWhenEnteringBackground;
@property (nonatomic) BOOL shouldUseWeakMemoryCache;
@property (retain, nonatomic) BDImageWeakCache *weakCache;
@property (retain, nonatomic) BDImageLinkedMap *lruList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupLruListWithConfig:(id)a0;
- (void)commonInit:(id)a0;
- (void)setConfig:(id)a0;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (id)init;
- (void)removeAllObjects;
- (BOOL)containsObjectForKey:(id)a0;
- (void)didReceiveMemoryWarning:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (id)initWithConfig:(id)a0;
- (void)dealloc;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)didEnterBackground:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1 cost:(unsigned long long)a2;

@end
