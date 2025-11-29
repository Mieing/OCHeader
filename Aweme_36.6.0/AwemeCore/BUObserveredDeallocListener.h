@class NSHashTable;

@interface BUObserveredDeallocListener : NSObject {
    id _observeredObj;
    NSHashTable *_proxyHashTable;
}

- (id)initWithObserveredObject:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)addProxy:(id)a0;

@end
