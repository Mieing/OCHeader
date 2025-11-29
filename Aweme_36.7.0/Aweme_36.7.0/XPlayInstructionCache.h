@class NSLock, NSMutableDictionary, NSMutableArray;

@interface XPlayInstructionCache : NSObject {
    NSLock *_lock;
    NSLock *_overstockInstLock;
}

@property (retain, nonatomic) NSMutableDictionary *cache;
@property (retain, nonatomic) NSMutableArray *overstockInst;

- (void)cacheInstruction:(id)a0;
- (id)removeWithAckInstruction:(id)a0;
- (id)flushCacheInstructionWithItemId:(id)a0;
- (void)addOverstockInst:(id)a0;
- (void)removeOverstockInstWithItemId:(id)a0;
- (void)flushOverstockInst:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;

@end
