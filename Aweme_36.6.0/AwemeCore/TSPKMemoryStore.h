@class NSString, NSMutableDictionary;
@protocol TSPKLock;

@interface TSPKMemoryStore : NSObject <TSPKCacheStore>

@property (retain, nonatomic) NSMutableDictionary *valueDict;
@property (retain, nonatomic) id<TSPKLock> lock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedStore;

- (void)put:(id)a0 value:(id)a1;
- (BOOL)containsKey:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)get:(id)a0;

@end
