@class NSMutableDictionary;
@protocol TSPKLock;

@interface TSPKCacheEnv : NSObject

@property (retain, nonatomic) NSMutableDictionary *processorDict;
@property (retain, nonatomic) id<TSPKLock> lock;

+ (id)shareEnv;

- (BOOL)containsProcessor:(id)a0;
- (BOOL)needUpdate:(id)a0;
- (void)updateCache:(id)a0 newValue:(id)a1;
- (void)registerProcessor:(id)a0 key:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)get:(id)a0;
- (void)unregisterProcessor:(id)a0;

@end
