@class NSMutableDictionary;

@interface WCFinderLimitedCapacityQueueMgr : NSObject

@property (retain, nonatomic) NSMutableDictionary *capacityContainerDic;
@property (nonatomic) long long capacityCount;

- (id)initWithCapacityCount:(long long)a0;
- (id)initWithCapacityCount:(long long)a0 queueKey:(id)a1;
- (BOOL)appendObject:(id)a0;
- (id)getCapacityQueue;
- (BOOL)removeFirstObject;
- (BOOL)removeLastObject;
- (void)resetQueueState;
- (id)initWithCapacityCount:(long long)a0 queueKeyArray:(id)a1;
- (id)getCapacityQueueArrayFromContainerDicWithKey:(id)a0;
- (BOOL)appendObject:(id)a0 queueKey:(id)a1;
- (BOOL)checkObjectAlreadyInQueue:(id)a0 queueKey:(id)a1;
- (id)getCapacityQueueWithQueueKey:(id)a0;
- (BOOL)removeFirstObjectWithQueueKey:(id)a0;
- (BOOL)removeLastObjectWithQueueKey:(id)a0;
- (BOOL)resetQueueStateWithQueueKey:(id)a0;
- (void)resetAllQueueState;
- (id)getAllCapacityObject;
- (void).cxx_destruct;

@end
