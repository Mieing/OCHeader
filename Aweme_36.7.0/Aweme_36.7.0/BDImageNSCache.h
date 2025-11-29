@class NSString, NSMapTable, NSObject;
@protocol OS_dispatch_semaphore;

@interface BDImageNSCache : NSCache <BDMemoryCache> {
    BOOL _userConfigSet;
}

@property (nonatomic) BOOL clearMemoryOnMemoryWarning;
@property (nonatomic) BOOL clearMemoryWhenEnteringBackground;
@property (nonatomic) BOOL shouldUseWeakMemoryCache;
@property (retain, nonatomic) NSMapTable *weakCache;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *weakCacheLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

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
- (void)didEnterBackground:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1 cost:(unsigned long long)a2;

@end
