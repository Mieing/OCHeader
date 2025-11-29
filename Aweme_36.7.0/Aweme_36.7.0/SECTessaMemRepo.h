@class NSLock, NSMutableDictionary;

@interface SECTessaMemRepo : NSObject {
    NSLock *_cacheLock;
}

@property (retain, nonatomic) NSMutableDictionary *caches;

- (void)addTessa:(id)a0;
- (void)removeTessa:(id)a0;
- (void).cxx_destruct;
- (id)allItems;
- (void)reset;
- (id)initWithConfig:(id)a0;
- (id)query:(id)a0;

@end
