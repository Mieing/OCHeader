@class NSString, DIRSConcurrentCollection;

@interface DIRSCacheStore : NSObject <IRISStore> {
    DIRSConcurrentCollection *cache;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (id)init;
- (BOOL)removeObjectForKey:(id)a0;
- (BOOL)setObject:(id)a0 forKey:(id)a1;

@end
