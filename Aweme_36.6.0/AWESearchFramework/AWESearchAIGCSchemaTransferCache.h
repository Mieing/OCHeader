@class NSString, NSMapTable;

@interface AWESearchAIGCSchemaTransferCache : NSObject <AWESearchAIGCSchemaTransferCacheProtocol>

@property (retain, nonatomic) NSMapTable *cache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (id)storeObject:(id)a0;
- (id)consumeObjectForKey:(id)a0;
- (void).cxx_destruct;
- (void)clear;
- (id)objectForKey:(id)a0;
- (id)init;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;

@end
