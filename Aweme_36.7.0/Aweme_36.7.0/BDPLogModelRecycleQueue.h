@class NSMutableSet;

@interface BDPLogModelRecycleQueue : NSObject

@property (retain, nonatomic) NSMutableSet *queue;
@property (weak, nonatomic) id obToken;

+ (id)defaultRecycleQueue;

- (void)enqueue:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)dequeue;
- (void)dealloc;

@end
