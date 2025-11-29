@class NSMutableArray;

@interface IESECLiveQueue : IESECLiveAbstractQueue

@property (retain, nonatomic) NSMutableArray *list;

- (id)front;
- (void)insertFront:(id)a0;
- (void)enqueueFromArray:(id)a0;
- (BOOL)contains:(id)a0;
- (void)enqueue:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (void)removeAll;
- (void)removeObject:(id)a0;
- (id)init;
- (void)enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)dequeue;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)count;
- (id)toArray;
- (id)back;

@end
