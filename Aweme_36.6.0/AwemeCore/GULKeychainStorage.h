@class NSString, NSCache, NSObject;
@protocol OS_dispatch_queue;

@interface GULKeychainStorage : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *keychainQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *inMemoryCacheQueue;
@property (readonly, nonatomic) NSString *service;
@property (readonly, nonatomic) NSCache *inMemoryCache;

- (id)getObjectForKey:(id)a0 objectClass:(Class)a1 accessGroup:(id)a2;
- (id)removeObjectForKey:(id)a0 accessGroup:(id)a1;
- (id)setObject:(id)a0 forKey:(id)a1 accessGroup:(id)a2;
- (id)initWithService:(id)a0 cache:(id)a1;
- (id)getObjectFromKeychainForKey:(id)a0 objectClass:(Class)a1 accessGroup:(id)a2;
- (id)keychainQueryWithKey:(id)a0 accessGroup:(id)a1;
- (void).cxx_destruct;
- (void)resetInMemoryCache;
- (id)initWithService:(id)a0;

@end
