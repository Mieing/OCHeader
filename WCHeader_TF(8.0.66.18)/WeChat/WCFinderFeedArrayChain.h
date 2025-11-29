@class NSHashTable;

@interface WCFinderFeedArrayChain : NSObject

@property (retain, nonatomic) NSHashTable *arrays;

- (id)init;
- (void)modify:(id /* block */)a0 source:(id)a1;
- (void).cxx_destruct;

@end
