@class NSMutableOrderedSet;

@interface AWEGrouponLifeFeedsPendingBlock : NSObject

@property (retain, nonatomic) NSMutableOrderedSet *pendingBlocks;

- (void)invokeBlock;
- (void)pushBlock:(id /* block */)a0;
- (void)invokeAllBlocks;
- (void).cxx_destruct;

@end
