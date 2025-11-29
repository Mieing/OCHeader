@class NSMutableArray;

@interface MMLiveQueue : NSObject <NSFastEnumeration>

@property (nonatomic) unsigned long long maxCount;
@property (retain, nonatomic) NSMutableArray *queue;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) unsigned long long defaultEvictionBehavior;

- (id)init;
- (id)initNonPrioritized;
- (id)initNonPrioritizedWithMaxCount:(unsigned long long)a0;
- (id)initWithPrioritizationPolicy:(id /* block */)a0;
- (id)initWithPrioritizationPolicy:(id /* block */)a0 maxCount:(unsigned long long)a1;
- (BOOL)enqueue:(id)a0;
- (BOOL)enqueue:(id)a0 evictionBehavior:(unsigned long long)a1;
- (BOOL)enqueue:(id)a0 evictionBehavior:(unsigned long long)a1 tieBreakingBehavior:(unsigned long long)a2;
- (id)peek;
- (id)dequeue;
- (BOOL)contains:(id)a0;
- (unsigned long long)indexOf:(id)a0;
- (void)reprioritize:(id)a0;
- (void)reprioritize:(id)a0 tieBreakingBehavior:(unsigned long long)a1;
- (void)reprioritizeAll;
- (BOOL)remove:(id)a0;
- (void)clear;
- (id)arrayCopy;
- (id)objectEnumerator;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)enqueueEx:(id)a0 tieBreakingBehavior:(unsigned long long)a1;
- (void).cxx_destruct;

@end
