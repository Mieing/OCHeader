@interface MMLivePrioritizedQueue : MMLiveQueue

@property (copy, nonatomic) id /* block */ comparator;

- (id)initWithPrioritizationPolicy:(id /* block */)a0 maxCount:(unsigned long long)a1;
- (unsigned long long)defaultEvictionBehavior;
- (void)enqueueEx:(id)a0 tieBreakingBehavior:(unsigned long long)a1;
- (void)reprioritizeAll;
- (void).cxx_destruct;

@end
