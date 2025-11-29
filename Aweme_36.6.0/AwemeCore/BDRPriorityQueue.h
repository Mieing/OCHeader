@class NSLock, NSMutableArray, NSMutableDictionary;
@protocol BDRPriorityQueueDelegate;

@interface BDRPriorityQueue : NSObject

@property (retain, nonatomic) NSMutableArray *queue;
@property (retain, nonatomic) NSMutableDictionary *dict;
@property (retain, nonatomic) NSLock *lock;
@property (weak, nonatomic) id<BDRPriorityQueueDelegate> delegate;
@property (nonatomic) long long subQueueMaxObjectCount;

- (id)findObjectWithKey:(id)a0;
- (void)discardObjectInSubQueue:(id)a0;
- (void)enqueue:(id)a0;
- (void).cxx_destruct;
- (BOOL)removeObject:(id)a0;
- (id)init;
- (void)removeAllObjects;
- (id)dequeue;

@end
